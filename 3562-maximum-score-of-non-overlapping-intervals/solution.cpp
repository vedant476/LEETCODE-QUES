using ll = long long;

struct Node {
    ll score = 0;
    array<int, 4> a{};
    int sz = 0;

    void add(int i) { a[sz++] = i, sort(a.begin(), a.begin() + sz); }
};

bool lex(const Node& x, const Node& y) {
    for (int i = 0; i < min(x.sz, y.sz); ++i)
        if (x.a[i] != y.a[i])
            return x.a[i] < y.a[i];

    return x.sz < y.sz;
}

class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();
        for (int i = 0; i < n; ++i)
            intervals[i].push_back(i);

        sort(begin(intervals), end(intervals));

        vector<int> nxt(n);

        for (int i = 0; i < n; ++i) {
            int l = i + 1, r = n;

            while (l < r) {
                int m = l + (r - l) / 2;

                if (intervals[m][0] > intervals[i][1])
                    r = m;

                else
                    l = m + 1;
            }

            nxt[i] = l;
        }

        vector<Node> dp(n + 1), ndp(n + 1);

        for (int k = 1; k <= 4; ++k) {
            for (auto& node : ndp)
                node = Node();

            for (int i = n - 1; i >= 0; --i) {
                Node skip = ndp[i + 1], take = dp[nxt[i]];

                take.score += intervals[i][2], take.add(intervals[i][3]);

                if (take.score > skip.score ||
                    take.score == skip.score && lex(take, skip))
                    ndp[i] = take;

                else
                    ndp[i] = skip;
            }

            swap(dp, ndp);
        }

        return vector<int>(dp[0].a.begin(), dp[0].a.begin() + dp[0].sz);
    }
};