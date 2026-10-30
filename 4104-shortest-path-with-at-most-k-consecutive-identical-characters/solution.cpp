constexpr int MAX = 5e4 + 1;
static int best[MAX];
class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>> graph(n);
        for (int i = 0, m = edges.size(); i < m; ++i) graph[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
        priority_queue<array<int,3> , vector<array<int,3>> , greater<>> pq;
        pq.push({0 , 1 , 0});
        fill(best , best + n , k + 1);
        while (!pq.empty()) {
            array<int,3> curr = pq.top(); pq.pop();
            const int d = curr[0], count = curr[1], u = curr[2];
            if (u == n - 1) return d;
            if (count >= best[u]) continue;
            best[u] = count;
            for (auto& [v , w] : graph[u]) {
                int nextcount = labels[u] == labels[v] ? count + 1 : 1;
                if (nextcount < best[v]) pq.push({d + w , nextcount , v});
            }
        }
        return -1;
    }
};