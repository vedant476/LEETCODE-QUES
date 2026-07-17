class SparseTable {
public:
    int n, LOG;
    vector<vector<int>> mx, mn;
    vector<int> lg;

    SparseTable(vector<int>& nums) {
        n = nums.size();
        LOG = 0;
        while ((1 << LOG) <= n) LOG++;

        mx.assign(LOG, vector<int>(n));
        mn.assign(LOG, vector<int>(n));
        lg.assign(n + 1, 0);

        for (int i = 2; i <= n; i++) {
            lg[i] = lg[i / 2] + 1;
        }

        for (int i = 0; i < n; i++) {
            mx[0][i] = nums[i];
            mn[0][i] = nums[i];
        }

        for (int k = 1; k < LOG; k++) {
            for (int i = 0; i + (1 << k) <= n; i++) {
                mx[k][i] = max(mx[k - 1][i],
                               mx[k - 1][i + (1 << (k - 1))]);

                mn[k][i] = min(mn[k - 1][i],
                               mn[k - 1][i + (1 << (k - 1))]);
            }
        }
    }

    long long rangeValue(int l, int r) {
        int len = r - l + 1;
        int k = lg[len];

        int maximum = max(mx[k][l],
                          mx[k][r - (1 << k) + 1]);

        int minimum = min(mn[k][l],
                          mn[k][r - (1 << k) + 1]);

        return 1LL * maximum - minimum;
    }
};

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        int n = nums.size();

        SparseTable st(nums);

        using T = tuple<long long,int,int>;

        priority_queue<T> pq;

        for (int l = 0; l < n; l++) {
            pq.push({st.rangeValue(l, n - 1), l, n - 1});
        }

        long long ans = 0;

        while (k--) {

            auto [val, l, r] = pq.top();
            pq.pop();

            ans += val;

            if (r > l) {
                pq.push({
                    st.rangeValue(l, r - 1),
                    l,
                    r - 1
                });
            }
        }

        return ans;
    }
};