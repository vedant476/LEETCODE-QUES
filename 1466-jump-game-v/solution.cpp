class Solution {
public:
    int maxJumps(const vector<int>& arr, unsigned d) {
        const unsigned n = arr.size();
        vector<unsigned> dp(n, 1);
        vector<unsigned> idx(n);
        iota(idx.begin(), idx.end(), 0u);
        sort(idx.begin(), idx.end(), [&arr](auto a, auto b) { return arr[a] > arr[b]; });
        for (auto i: idx) {
            unsigned l = max(i, d) - d;
            unsigned h = min(n, i + d + 1);
            auto dpi1 = dp[i] + 1;
            auto u = arr[i];
            for (unsigned j = i; j-- > l; ) {
                if (arr[j] >= u) break;
                dp[j] = max(dp[j], dpi1);
            }
            for (unsigned j =i ; ++j < h; ) {
                if (arr[j] >= u) break;
                dp[j] = max(dp[j], dpi1);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};