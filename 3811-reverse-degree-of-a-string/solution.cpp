class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(auto i =0 ;i<s.size();i++){
            int val = 26 - (s[i] - 'a');
            ans += val*(1+i);
        }
    return ans;
    }
};