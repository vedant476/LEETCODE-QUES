class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        vector<int>cnt(n,0);
        for( int a : nums){
            if(a>=n) return false;
            if(a<n-1 && cnt[a]> 0 )return false;
            if(a == n - 1 && cnt[a] > 1) return false;
            cnt[a]++;
        }
        return true;
    }
};