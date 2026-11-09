class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int ans =0;
        int prev = -1;
        for(int x : nums){
            if(x==prev){
                ans++;
            }
            else{
                prev = x;
            }
        }
        return ans;
    }
};