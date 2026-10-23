class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int k = -1;
        for(int i =0;i<nums.size();i++){
                if(i != nums[i]){
                    k&=nums[i];
                if(k == 0) return 0;
            }
        }
        return max(k,0);
    }
};