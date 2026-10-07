class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size() == 0 && n == 1) 
            return 1;
        vector<int> out(n+1,0);
        vector<int> in(n+1,0);
        for( int i = 0;i<trust.size();i++){
           out[trust[i][0]]++;
           in[trust[i][1]]++;
        }

        for( int i=0;i<in.size();i++){
            if(in[i] == n-1 && out[i] == 0){
                return i;
            }
        }
        return -1;
    }
};