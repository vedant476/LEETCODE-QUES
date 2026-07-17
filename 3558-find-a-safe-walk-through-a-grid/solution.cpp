typedef tuple<int, int, int> iii;

class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& g, int health) {
        int m = g.size(), n = g[0].size();
        priority_queue<iii, vector<iii>, greater<iii>> pq;
        pq.push({g[0][0], 0, 0});

        vector<vector<int>> d(m, vector<int> (n, INT_MAX));
        int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
        d[0][0] = g[0][0];

        while(!pq.empty()){
            auto [curr, x, y] = pq.top();
            pq.pop();

            if(curr > d[x][y]) continue;
            for(int k=0; k<4; k++){
                int nx = x+dx[k], ny = y+dy[k];
                if(nx<0 || ny<0 || nx>m-1 || ny>n-1) continue;
                if(curr + g[nx][ny] < d[nx][ny]){
                    d[nx][ny] = curr + g[nx][ny];
                    pq.push({d[nx][ny], nx, ny});
                }
            }
        }

        return health > d[m-1][n-1];
    }
};