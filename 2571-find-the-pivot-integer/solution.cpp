class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n * (n + 1)) / 2;
        int target = 0;
        for (int i = 1; i <= n; i++) {
            target += i;
            if((sum - target + i) == target) {
                return i;
            } 
        }
        return -1;
    }
};