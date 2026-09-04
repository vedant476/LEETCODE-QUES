class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i =0 ; i<nums.size();++i){
            int mx = nums[i];
            int mn = nums[i];
            for(int j = 0 ;j<i;++j){
                mx = max(nums[j],mx);  
            }
            for(int j = i+1 ;j<nums.size();++j){
                mn = min(nums[j],mn);
            }

            if(mx-mn <=k) return i;
            
        }
        return -1;
    }
};