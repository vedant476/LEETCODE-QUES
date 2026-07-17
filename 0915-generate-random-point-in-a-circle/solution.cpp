class Solution {
private:
    double r, x, y;

public:
    Solution(double radius, double x_center, double y_center) {
        r = radius;
        x = x_center;
        y = y_center;
    }
    
    vector<double> randPoint() {
        double rx, ry;
        do {
            // Generate random values between -r and r
            rx = ((double)rand() / RAND_MAX) * 2 * r - r;
            ry = ((double)rand() / RAND_MAX) * 2 * r - r;
        } while (rx * rx + ry * ry > r * r); // Reject if outside circle radius
        
        return {x + rx, y + ry};
    }
};