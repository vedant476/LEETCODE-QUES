class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        int result = 0, lo = 0;
        for (int hi = 0; hi < nums.size(); ++hi) {
            auto& c = counter[nums[hi]];
            c++;
            while (c > k) {
                auto out = nums[lo++];
                counter[out]--;
            }
            result = max(result, hi - lo + 1);
        }
        return result;
    }
};