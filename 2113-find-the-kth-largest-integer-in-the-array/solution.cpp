class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
         auto cmp = [](const string& a, const string& b) {
            
            if (a.size() != b.size()) return a.size() > b.size();
            return a > b;
        };

        nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), cmp);
        return nums[k - 1];
    }
};