class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int mx = INT_MIN;
       for( int i = 0;i<nums.size();i++){
        for( int j = 0;j<nums.size();j++){
            int x = nums[i],y = nums[j];
            if(abs(x - y) <= min(x, y)){
                mx = max( mx, x^y);
            }
        }
       }
       return mx ; 
    }
};