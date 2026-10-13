int speedup = []{ios::sync_with_stdio(0); cin.tie(0); return 0;}();

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int m = size(nums)/2;
        for (int &n : nums) n = n*n;
        nth_element(begin(nums), begin(nums) + m, end(nums));
        return accumulate(begin(nums)+m, end(nums), -accumulate(begin(nums), begin(nums)+m, 0ll));
    }
};