class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        int freq_map[100001] = {0};
        int count = 0;
        int max = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {

                freq_map[nums[i]]++;

                if (freq_map[nums[i]] > count) {

                    count = freq_map[nums[i]];
                    max = nums[i];
                }
                
                 else if (freq_map[nums[i]] == count) {
                    max= min(nums[i], max);
                }
            }
        }

        return max;
    }
};

