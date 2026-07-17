class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> res;
        backTracking(nums,res,0);
        return res;
        
    }

    void backTracking(vector<int>& nums,vector<vector<int>> &res,int start){

        if(start == nums.size()){
            res.push_back(nums);
            return;
        }
        

        for(int i = start; i < nums.size();i++){
            swap(nums[i],nums[start]);
            backTracking(nums,res,start+1);
            swap(nums[i],nums[start]);
            
        }
    }
};