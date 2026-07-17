class Solution {
public:
    bool isVowel(char c) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    
    bool doesAliceWin(string s) {
        int vowels=0;
        for(int i=0; i<s.length(); ++i) {
            if(isVowel(s[i])) ++vowels;
        }
        if(vowels==0) return false;
        else return true;
    }
};