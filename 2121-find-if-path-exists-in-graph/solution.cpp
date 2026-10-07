class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        vector<int> father(n);
        for(int i = 0; i < n; i++) father[i] = i;
        int size = edges.size();
        for(int i = 0; i < size ; i ++){
            int u = edges[i][0], v = edges[i][1];
            int father_u = father[u], father_v = father[v];
            while(father_u != father[father_u]) father_u = father[father_u];
            while(father_v != father[father_v]) father_v = father[father_v];
            int dest = min(father_u, father_v);
            father[father_u] = father[father_v] = dest;
        }
        int father_s = father[source] , father_d = father[destination];
        while(father_s != father[father_s]) father_s = father[father_s];
        while(father_d != father[father_d]) father_d = father[father_d];
        return father_d == father_s;
    }
};