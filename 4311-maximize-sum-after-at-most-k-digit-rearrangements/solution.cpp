class Solution {
public:
    int f(int n){
        
        string s = to_string(n);
        sort(s.begin(),s.end(),greater<char>());
        return stoi(s);
    }
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = accumulate(nums.begin(),nums.end(),0LL);
        vector<int> g;
        for(int x : nums){
            g.push_back(f(x)-x);
        }
        sort(g.rbegin(),g.rend());
        for( int i = 0;i<k&&g[i]>0;i++){
            sum+=g[i];
        }

        return sum;
    }
};