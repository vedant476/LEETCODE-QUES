class Solution {
public:
    int longestString(int x, int y, int z) {
      return (z + (2*min(x,y)+(x != y)))*2;
    }
};