class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> cntr(26,0);
        vector<int> cntm(26,0);
        for( auto ch :ransomNote )
        {
            cntr[ch-'a']++;
        }
        for( auto ch :magazine )
        {
            cntm[ch-'a']++;
        }
        for( int  i = 0 ; i<26;i++){
            if(cntr[i] != cntm[i] && cntr[i] > cntm[i] ) return false;
        }
        return true;
    }
};