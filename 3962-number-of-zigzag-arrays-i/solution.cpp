class Solution {
public:
    int zigZagArrays(int n, int l, int r) {
        int mod = 1'000'000'007;
        int m = r-l+1;
        vector<int> dp(m, 1);
        while (--n) {
            long long sum = 0;
            for (auto& x : dp) {
                int cur = x;
                x = sum % mod, sum += cur;
            }
            reverse(begin(dp), end(dp));
        }
        return 2*reduce(begin(dp), end(dp), 0LL) % mod;
    }
};