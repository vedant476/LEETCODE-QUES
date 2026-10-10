class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n =nums.size(),ans =1;
        int i =0;
        while(n>i){
            int r = nums[i] % k;
            int j =i;
            while(j<n&&nums[j]%k==r) j++;
            int m = j-i;
            int step = k/ __gcd(r,k);
            ans = max(ans,((m-1)/step)*step + 1);
            i =j;
        }
        return ans;
    }
};