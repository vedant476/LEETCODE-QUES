class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int> cnt(nums.size() + 1, 0);
        vector<int> v;
        for(int x : nums)
            cnt[x]++;

        for( int i =1;i<cnt.size();i++){
            if(cnt[i]==0)v.push_back(i);
        }
        return v;
    }
};