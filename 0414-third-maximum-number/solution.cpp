

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
    sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        int n = nums.size();
        if (n >= 3) {
            return nums[n - 3]; 
        }
        return nums[n - 1]; 
    }
};
