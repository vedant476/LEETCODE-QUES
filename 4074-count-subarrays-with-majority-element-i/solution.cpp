class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        long long v = 0;
        for( int i = 0; i < nums.size(); i++){
            int sum =0;
            for( int j = i ; j< nums.size();j++){
                sum += (nums[j]==target)? 1:-1;
                if( sum > 0) v++;
            }
        }
        return int(v);
    }
};