class Solution {
public:
    static constexpr int MOD = 1000000007;

    vector<vector<long long>> multiply(
        const vector<vector<long long>>& A,
        const vector<vector<long long>>& B) {

        int n = A.size();

        vector<vector<long long>> C(
            n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {

                if (A[i][k] == 0) continue;

                for (int j = 0; j < n; j++) {

                    if (B[k][j] == 0) continue;

                    C[i][j] =
                        (C[i][j] +
                         A[i][k] * B[k][j]) % MOD;
                }
            }
        }

        return C;
    }

    vector<vector<long long>> power(
        vector<vector<long long>> base,
        long long exp) {

        int n = base.size();

        vector<vector<long long>> res(
            n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            res[i][i] = 1;
        }

        while (exp) {

            if (exp & 1)
                res = multiply(res, base);

            base = multiply(base, base);
            exp >>= 1;
        }

        return res;
    }

    int zigZagArrays(int n, int l, int r) {

        int m = r - l + 1;

        if (n == 1)
            return m;

        int states = 2 * m;

        vector<vector<long long>> T(
            states,
            vector<long long>(states, 0));

        for (int a = 0; a < m; a++) {
            for (int b = 0; b < m; b++) {

                if (a == b) continue;

                if (a < b) {
                    T[a][m + b] = 1;
                } else {
                    T[m + a][b] = 1;
                }
            }
        }

        auto P = power(T, n - 1);

        vector<long long> start(states, 1);

        long long ans = 0;

        for (int i = 0; i < states; i++) {
            for (int j = 0; j < states; j++) {

                ans =
                    (ans +
                     start[i] * P[i][j]) % MOD;
            }
        }

        return (int)ans;
    }
};