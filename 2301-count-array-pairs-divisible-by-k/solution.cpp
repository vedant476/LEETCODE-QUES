class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        map<int ,int> mp;
        long long cnt =0;
        for( int i =0;i<nums.size();i++){
            int x =  gcd(k,nums[i]);
            int req = k/x; 
            for( auto it: mp ){
                if( it.first % req == 0 ) cnt += it.second;
            }
            mp[x]++;
        }
        return cnt;
    }
};