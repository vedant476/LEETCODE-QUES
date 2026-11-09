class Solution {
public:
    int minMoves(vector<int>& nums) {
        return -accumulate(nums.begin(),nums.end(),0) + ((int)nums.size())*(*max_element(nums.begin(),nums.end()));
    }
};