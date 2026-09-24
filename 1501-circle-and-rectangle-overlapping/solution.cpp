class Solution {
public:
    bool checkOverlap(int r, int Cx, int Cy, int x1, int y1, int x2, int y2) {
        int x = clamp(Cx,x1,x2)-Cx;
        int y = clamp(Cy,y1,y2)-Cy;

        return x*x+y*y <= r*r;
    }
};