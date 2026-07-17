class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        const int n = matrix.size();
        bitset<101> helper;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (helper.test(matrix[i][j])) return false;
                helper.set(matrix[i][j]);
            }
            helper.reset();
            for (int j = 0; j < n; ++j) {
                if (helper.test(matrix[j][i])) return false;
                helper.set(matrix[j][i]);
            }
            helper.reset();
        }

        return true;
    }
};