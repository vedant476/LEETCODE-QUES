class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v = {-1,-1};
        int r = nums.size()-1;
        int l = 0;
        while (l <= r) {
    int m = l + ( r - l) / 2;
if (nums[m] == target)
{
    v[0]= m;
    r= m-1;
}
else if (nums[m] < target) {
            l = m + 1;
        }

else 
        r = m-1;
  }

    r = nums.size()-1;
    l = 0;
          while (l <= r) {
    int m = l + ( r - l) / 2;
if (nums[m] == target)
{
    v[1]= m;
    l= m+1;
}
else if (nums[m] < target) {
            l = m + 1;
        }

else 
        r = m-1;
  }
 
    return v;
}
};