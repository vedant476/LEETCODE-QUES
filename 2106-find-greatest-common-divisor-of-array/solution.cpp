class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());
        return b == 0 ? a : gcd(b, a % b);
    }
};