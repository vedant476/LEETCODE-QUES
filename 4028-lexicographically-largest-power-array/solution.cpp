class Solution {
public:
    vector<int> largestPower(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <int> v(15,0);
        
for( int i = 0 ;i<nums.size();i++){
        bitset<15> y(nums[i]);
    
        for( int j = 0;j<15;j++){
            v[j] += y[j];
        }}

 reverse(v.begin(),v.end());
        return v;
    }
};