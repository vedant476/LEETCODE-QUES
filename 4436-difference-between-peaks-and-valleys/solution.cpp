class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
       int p = 0;
        int v = 0;
        int n = nums.size();
        for(int i =0; i<nums.size()-1;i++ ){
            if(0<i&& i < n - 1&&nums[i] > nums[i - 1]&&nums[i] > nums[i + 1]) p += nums[i];
            if(0 < i&& i < n - 1 &&
            nums[i] < nums[i - 1]&&
            nums[i] < nums[i + 1]) v+= nums[i];
        }
        return p-v;
    }
};