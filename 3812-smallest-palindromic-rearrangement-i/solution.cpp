class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size(), n0=n/2;
        int freq[26]={0};
        for(int i=0; i<n0; i++)
            freq[s[i]-'a']++;
        int l=0;
        for(int x=0; x<26; x++){
            int f=freq[x];
            char c='a'+x;
            fill(s.begin()+l, s.begin()+l+f, c);
            fill(s.rbegin()+l, s.rbegin()+l+f, c);
            l+=f;
        }
        return s;
    }
};