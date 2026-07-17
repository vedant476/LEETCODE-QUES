class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        vector<long long> exactPairs(mx + 1, 0);

        for (int d = mx; d >= 1; d--) {

            long long cnt = 0;

            for (int multiple = d; multiple <= mx; multiple += d)
                cnt += freq[multiple];

            exactPairs[d] = cnt * (cnt - 1) / 2;

            for (int multiple = 2 * d; multiple <= mx; multiple += d)
                exactPairs[d] -= exactPairs[multiple];
        }

        vector<long long> prefix(mx + 1, 0);
        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + exactPairs[i];

        vector<int> ans;

        for (long long q : queries) {

            long long target = q + 1;

            int lo = 1, hi = mx;

            while (lo < hi) {
                int mid = lo + (hi - lo) / 2;

                if (prefix[mid] >= target)
                    hi = mid;
                else
                    lo = mid + 1;
            }

            ans.push_back(lo);
        }

        return ans;
    }
};