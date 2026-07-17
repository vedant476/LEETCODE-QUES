class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);

        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        int leftSum = 0;

        for (int i = 0; i < n; i++) {
            int rightSum = totalSum - leftSum - nums[i];
            answer[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }

        return answer;   
    }
};