class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n-1;
        int idx = n-1;
        for(int i = 0; i < n; i++){
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];
            if(leftSq > rightSq){
                ans[idx] = leftSq;
                left++;
            }
            else{
                ans[idx] = rightSq;
                right--;
            }
            idx--;
        }
        return ans;
    }
};