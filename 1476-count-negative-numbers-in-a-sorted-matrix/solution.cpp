class Solution {
public:
    int countNegatives(vector<vector<int>>& nums) {
          int n = nums.size();
          int m = nums[0].size();
          int r=0 , c=m-1;
          int ans = 0;
          while(r<n && c>=0)
          {
                if(nums[r][c] >= 0)
                {
                    r++;
                }
                else
                {
                    c--;
                    ans+=(n-r);
                }
          }
          return ans;                  
    }
};