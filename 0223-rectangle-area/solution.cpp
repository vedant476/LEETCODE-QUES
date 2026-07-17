class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area = abs(ax1-ax2) * abs(ay1-ay2) + abs(bx1-bx2) *abs(by1-by2);
        int r = min(ax2,bx2);
        int l = max(ax1,bx1);
        int t = min(ay2,by2);
        int b = max(ay1,by1);
        if( r <= l || t <= b ) return area;
        
        return area - abs(r-l)*abs(t-b);
    }
};