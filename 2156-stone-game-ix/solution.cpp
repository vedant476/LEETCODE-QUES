class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int f[3] = {0,0,0};
        for( int i : stones){
            f[i%3]++;
        }
        if (~f[0] & 1)
            return min(f[1], f[2]) > 0;

        return abs(f[1] - f[2]) > 2;
    }
};