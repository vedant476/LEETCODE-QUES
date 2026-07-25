class Solution {
public:
    int maxProduct(int n) {
        int n1 = 0, n2 = 0;

        while (n) {
            int d = n % 10;
            n /= 10;

            if (d >= n1) {
                n2 = n1;
                n1 = d;
            } else if (d > n2) {
                n2 = d;
            }
        }

        return n1 * n2;
    }
};