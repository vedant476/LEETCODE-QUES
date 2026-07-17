class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour %= 12;
        double ma = minutes * 6;
        double ha = hour * 30 + minutes * 0.5;
        double ans = abs( ha - ma);
        return min( ans, 360-ans);
    }
};