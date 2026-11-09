class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n =grid[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));

        int r = 0,c =0;
        int Lr =-1,Lc=-1;
        while(r>=0&&r<m&&c>=0&&c<n){
            if(vis[r][c]) break;

            vis[r][c] = true;
            Lr = r;
            Lc = c;
            
            if( grid[r][c] == 'R') c++;
            else if( grid[r][c] == 'L') c--;
            else if( grid[r][c] == 'U') r--;
            else if(grid[r][c] == 'D') r++;
            
            }
        
        return {Lr,Lc};
    }
};