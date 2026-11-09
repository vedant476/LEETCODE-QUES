class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int mx = INT_MIN;
        int ii = -1;
        int jj = -1;

        for(int i = 0 ;i<nums.size();i++){
            for( int j = 0;j<nums.size();j++){
                if( nums[i] + nums[j] == target && nums[i] > nums[j] ){
                    int p = nums[i] * nums[j];
                    if( mx < p ){
                        mx =  p;
                        ii = i;
                        jj = j;
                    }
                }
            }
        }
        return {ii,jj};
    }
};