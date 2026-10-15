class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size(),mx= 0,s = 0;

        for( int r =0 ;r<n;r++ ){
            while(nums[r]>2*nums[s]){
                s++;
            }

            for( int k = s;k<r;k++){
                mx = max(mx, nums[r]^nums[k]);
            }
        }
        return mx;
    }
};