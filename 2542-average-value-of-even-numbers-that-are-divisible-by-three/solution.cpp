class Solution {
public:

int averageValue(vector<int>& nums) {
    int s = 0;
    int n = 0;

    for (int i : nums) {
        if (i % 6 == 0) {
            n++;
            s += i;
        }
    }

    if (n == 0)
        return 0;

    return s / n;
}
};