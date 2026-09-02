#pragma GCC optimize("O3,unroll-loops,tree-vectorize,strict-aliasing,fast-math")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#if defined(__clang__)
#define ASSUME(x) __builtin_assume(x)
#else
#define ASSUME(x) do { if (!(x)) __builtin_unreachable(); } while (0)
#endif

static const auto fast_io = []() [[gnu::always_inline]] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

alignas(64) static int prefix[508];
alignas(64) static int pf[508][508];
alignas(64) static int sf[508][508];

class Solution {
public:
    [[clang::always_inline]] static inline int fast_max(int a, int b) noexcept {
        return a > b ? a : b;
    }

    int stoneGameV(vector<int>& stoneValue) {
        const int n = static_cast<int>(stoneValue.size());
        ASSUME(n >= 1);
        ASSUME(n <= 500);

        if (n <= 1) [[unlikely]] return 0;
        if (n == 2) [[unlikely]] return std::min(stoneValue[0], stoneValue[1]);

        prefix[0] = 0;
        for (int i = 1; i <= n; ++i) {
            prefix[i] = prefix[i - 1] + stoneValue[i - 1];
            
            pf[i][i] = stoneValue[i - 1];
            sf[i][i] = stoneValue[i - 1];
            pf[i][i - 1] = 0;
            sf[i + 1][i] = 0;
        }

        int answer = 0;

        for (int i = n - 1; i >= 1; --i) {
            int m = i;

            #pragma clang loop unroll_count(4)
            for (int j = i + 1; j <= n; ++j) {
                const int target = prefix[i - 1] + prefix[j];

                while ((prefix[m] << 1) < target) {
                    ++m;
                }

                const int isEqual = ((prefix[m] << 1) == target);
                const int bestNext = fast_max(pf[i][m - 1 + isEqual], sf[m + 1][j]);

                answer = bestNext;

                const int total = prefix[j] - prefix[i - 1];
                const int value = total + bestNext;

                pf[i][j] = fast_max(pf[i][j - 1], value);
                sf[i][j] = fast_max(sf[i + 1][j], value);
            }
        }

        return answer;
    }
};