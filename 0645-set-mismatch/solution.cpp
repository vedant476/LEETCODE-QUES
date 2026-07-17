class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> cnt(nums.size() + 1, 0);
        for( int i :nums){
            cnt[i]++;
        }
        int d = -1;
        int m = -1;
        for( int i =0;i< cnt.size();i++){
            if( cnt[i]==0) m = i;
            if( cnt[i]==2) d = i;
        }
        return {d,m};
    }
};