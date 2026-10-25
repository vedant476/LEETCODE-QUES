class Solution {
    int m, n;

    bool c(vector<vector<int>>& grid, int i, int j) {  
        if (i < 0 || i >= m || j < 0 || j >= n) return false;  
        if (grid[i][j]) return true; 
        grid[i][j] = 1;  
        return c(grid, i + 1, j) & c(grid, i - 1, j) & 
               c(grid, i, j + 1) & c(grid, i, j - 1);  
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (!grid[i][j]) count += c(grid, i, j);
        return count;
    }
};