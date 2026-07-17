class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0; i<n;i++){                              
            if(ans.size()==0 || nums[i][0] > ans.back()[1]){  // Condition for pushing new interval(non -overlapping interval)
                ans.push_back(nums[i]);
            }

            else if(nums[i][0]<=ans.back()[1]){  // When intervals overlaps 
                ans.back()[1]=max(nums[i][1] , ans.back()[1]);     // covers all cases and such as [[1,4],[2,3]].
            }
        }
        return ans;
    }
};