class Solution {
public:
    int furthestDistanceFromOrigin(string_view moves) {
        int d = 0, l = 0;
        for (char c: moves) {
            d += (c == 'L') - (c == 'R');
            l += (c == '_');
        }

        return d >= 0 ? d + l: abs(d - l);
    }
};