class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt=0;
        vector<int> cntu(26,0);
        vector<int> cntl(26,0);
        for(auto i : word){
            if( i >= 'A' && i <= 'Z'){
            cntu[i-'A']++;
            }
            else 
            cntl[i-'a']++;
        }

        for(int i =0; i<26;i++){
            if(cntu[i] > 0 && cntl[i] > 0){
                cnt++;
            }
        }
        return cnt;
    }
};