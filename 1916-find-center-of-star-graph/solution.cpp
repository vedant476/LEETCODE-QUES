class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> f = edges[0];
        vector<int> s = edges[1];

        return (f[0] == s[0] || f[0] == s[1]) ? f[0] : f[1];
    }
};