class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0;
        int mx = 0;
        vector<int> count(101,0);
        for ( auto i : nums){
            count[i]++;
        }
         for (int x : count) {
            mx = max(mx, x);
        }
        for(int i : count){
            if(i==mx ){
                ans +=i;
            }
        }
        return ans;
    }
};