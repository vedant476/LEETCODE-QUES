class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int mx = *max_element(nums.begin(), nums.end());

        int current = 0;
        int best = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == mx) {
                current++;
                best = max(best, current);
            }
            else {
                current = 0;
            }
        }

        return best;
    }
};