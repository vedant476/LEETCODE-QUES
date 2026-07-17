class Solution {
public:
    int maxDistinct(string s) {
        vector<int> temp(26,0);
        int ans=0;
        for(char c: s){
            if(temp[c- 'a']==0)ans++;
            temp[c- 'a']++;
        }
        return ans;
    }
};