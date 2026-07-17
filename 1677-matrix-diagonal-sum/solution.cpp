class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        size_t n{mat.size()};
        int cnt{};
        for (int i{}; i<n; ++i){
            cnt+=mat[i][i];
            cnt+=mat[i][n-i-1];
        }
        if(n%2==1)
            cnt-=mat[n/2][n/2];
        return cnt;
    }
};