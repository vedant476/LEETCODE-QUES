class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        
        int x = 0, y = 0;
        
        for (auto v : nums1) x ^= v;
        for (auto v : nums2) y ^= v;
        
        int ans = 0;
        
        if (m % 2) ans ^= x;
        if (n % 2) ans ^= y;
        
        return ans;
    }
};