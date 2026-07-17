class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {

        restrictions.push_back({1, 0});
        sort(restrictions.begin(), restrictions.end());

        // Last building ko restriction do
        if (restrictions.back()[0] != n) {
            restrictions.push_back(
                {n, restrictions.back()[1] + (n - restrictions.back()[0])}
            );
        }

        int m = restrictions.size();

        // Left -> Right pass
        for (int i = 1; i < m; i++) {
            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i - 1][1] +
                (restrictions[i][0] - restrictions[i - 1][0])
            );
        }

        // Right -> Left pass
        for (int i = m - 2; i >= 0; i--) {
            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i + 1][1] +
                (restrictions[i + 1][0] - restrictions[i][0])
            );
        }

        int ans = 0;

        for (int i = 0; i < m - 1; i++) {

            long long x1 = restrictions[i][0];
            long long h1 = restrictions[i][1];

            long long x2 = restrictions[i + 1][0];
            long long h2 = restrictions[i + 1][1];

            long long d = x2 - x1;

            long long peak =
                max(h1, h2) +
                (d - abs(h1 - h2)) / 2;

            ans = max(ans, (int)peak);
        }

        return ans;
    }
};