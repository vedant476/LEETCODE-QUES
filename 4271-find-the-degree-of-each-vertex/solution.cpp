class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> v;
       for (int i=0;i<matrix.size();i++) {
        int sum = 0;
        for (int j=0;j<matrix.size();j++) {
            sum += matrix[i][j];
        }
        v.push_back(sum);
    }
    return v;
    }
};