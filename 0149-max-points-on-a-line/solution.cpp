class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int best = 1;

        for (auto& p1 : points) {
            int seen_slopes[5903] = {};

            for (auto& p2 : points) {
                if (&p1 == &p2) continue;

                int dx = p2[0] - p1[0];
                int dy = p2[1] - p1[1];
                if (dx < 0) {
                    dx = -dx;
                    dy = -dy;
                }
                int div = dx > dy ? gcd(dx, dy) : gcd(dy, dx);
                dx /= div;
                dy /= div;

                unsigned long long dx_bits = *((unsigned int*) &dx);
                unsigned long long dy_bits = *((unsigned int*) &dy);
                unsigned long long key = ((dx_bits << 32) | dy_bits) % 5903;
                seen_slopes[key]++;

                best = max(best, seen_slopes[key] + 1);
            }
        }

        return best;
    }

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b); 
    }
};