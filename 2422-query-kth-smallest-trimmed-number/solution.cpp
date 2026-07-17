class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;

    for(int i=0;i<queries.size();i++){

        int k = queries[i][0];
        int trim = queries[i][1];

        vector<pair<string,int>> temp;

        for(int j=0;j<nums.size();j++){

            string x = nums[j].substr(nums[j].size()-trim);

            temp.push_back({x,j});
        }

        sort(temp.begin(), temp.end());

        ans.push_back(temp[k-1].second);
    }

    return ans;
    }
};