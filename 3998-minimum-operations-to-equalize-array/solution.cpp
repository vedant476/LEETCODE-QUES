class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i = nums[0];
        for (int j : nums)
            if (i != j)
                return 1;
        return 0;
    }
};