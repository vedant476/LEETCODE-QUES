class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int x = c[1][0] - c[0][0];
        int y = c[1][1] - c[0][1];
        for(int i=2;i<c.size();i++){
            int tx = c[i][0]-c[0][0];
            int ty = c[i][1]-c[0][1];
            if(ty*x != y*tx)return false ;
        }
        return true ;
    }
};