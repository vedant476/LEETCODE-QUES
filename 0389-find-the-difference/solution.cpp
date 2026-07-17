class Solution {
public:
    char findTheDifference(string s, string t) {
        int k=0;
        for(int i=0;i<t.length();i++){
            if(i==t.length()-1) k+=int(t[i]);
            else {
                k=k+t[i];
                k=k-s[i];
            }
        }
        return char(k);
    }
};