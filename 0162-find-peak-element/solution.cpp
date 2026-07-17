class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {

            bool left = (i == 0) || (nums[i] > nums[i-1]);
            bool right = (i == nums.size()-1) || (nums[i] > nums[i+1]);

            if(left && right)
                return i;
        }

        return -1;
    }
};