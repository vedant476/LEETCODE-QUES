class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(nums.size()==1){
            return -1;
        }
        int n = nums.size();
        if (n == k) {
            return *max_element(nums.begin(), nums.end());
        }
        unordered_map<int,int>frq;
        for( int i:nums){
             frq[i]++;
        }
        if(k ==1){
            for( int i=50;i>=1;i--){
                if(frq[i] == 1) return i;
            }
            return -1;
        }
        int ans =-1;
        if(nums.front()!=nums.back()){
        if (frq[nums.front()] == 1)
            ans = max(ans, nums.front());

        if (frq[nums.back()] == 1)
            ans = max(ans, nums.back());
}
        return ans;
    }
};