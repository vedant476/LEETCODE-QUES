class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn =INT_MAX;
        int mx =0;
        for( int i : nums){
            mn = min(mn,i);
            mx = max(i,mx);
        }
        return gcd(mn,mx);
    }
};