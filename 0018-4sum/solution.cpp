class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> v;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 3; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            for(int j = i + 1; j < n - 2; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int l = j + 1;
                int r = n - 1;

                long long need =
                    (long long)target
                    - nums[i]
                    - nums[j];

                while(l < r)
                {
                    long long pairSum =
                        (long long)nums[l]
                        + nums[r];

                    if(pairSum == need)
                    {
                        v.push_back(
                            {nums[i], nums[j], nums[l], nums[r]}
                        );

                        l++;
                        r--;

                        while(l < r &&
                              nums[l] == nums[l - 1])
                            l++;

                        while(l < r &&
                              nums[r] == nums[r + 1])
                            r--;
                    }
                    else if(pairSum < need)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
        }

        return v;
    }
};