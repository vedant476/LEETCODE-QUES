class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool found = std::ranges::contains(nums, 0); 
    if (found) {
        int mi =0;
    for( int i = 0;i<nums.size();i++){   
        if(i > mi)
            return false; 
        mi = max(i+nums[i],mi);
    }
    }
    
    return true;
    }
};