class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int xy = 0;
        int yz = 0;
        int xz = 0;
        for ( int i =0;i<grid.size();i++){
            for ( int j = 0;j<grid.size();j++){
                if(grid[i][j]) xy++;
            }
        }
        for ( int i =0;i<grid.size();i++){
            int rmx = 0;
            for ( int j = 0;j<grid.size();j++){
                if(grid[i][j]>rmx) rmx = grid[i][j];
            }
            yz += rmx;
        }
        for ( int i =0;i<grid.size();i++){
            int cmx = 0;
            for ( int j = 0;j<grid.size();j++){
                if(grid[j][i]>cmx) cmx = grid[j][i];
            }
            xz += cmx;
        }
        return xy+yz+xz;
    }
};