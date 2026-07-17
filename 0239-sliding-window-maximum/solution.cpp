class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        static int dq[100005]; // 1. Stack/static allocation → zero init once at startup
        int head = 0, tail = 0;
        
        int n = nums.size();
        vector<int> res;
        res.reserve(n - k + 1); // 2. Reserve → avoids reallocations + skips zero-init
        
        for (int i = 0; i < n; ++i) {
            if (head < tail && dq[head] <= i - k) ++head;
            while (head < tail && nums[i] >= nums[dq[tail - 1]]) --tail;
            dq[tail++] = i;
            if (i >= k - 1) res.push_back(nums[dq[head]]);
        }
        return res;
    }
};