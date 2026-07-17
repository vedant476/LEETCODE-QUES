class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int target_index = nums.size() - k;
        nth_element(nums.begin(), nums.begin() + target_index, nums.end());
        
        return nums[target_index];
    }
};