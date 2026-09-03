class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        for( int i : nums){
            if( !(i % 2) ) ans.push_back(i);
        }
        for( int i : nums){
            if( i % 2 ) ans.push_back(i);
        }
        return ans;
    }
};