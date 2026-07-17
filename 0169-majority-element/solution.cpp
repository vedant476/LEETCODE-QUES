class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
    int i, candidate = -1, votes = 0;
    for (i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        }
        else {
            if (nums[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;

    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    return -1; 
        
    }
};