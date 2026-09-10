class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> cmap;
        int mx = 0;
        int l =0;
        for( int r = 0 ;r< s.size();r++){
        if(  cmap.count(s[r])==0||cmap[s[r]]<l){
            cmap[s[r]] =r;
            mx = max(mx,r-l+1);
        }
        else {
            l = cmap [s[r]]+1;
            cmap[s[r]] =r;
        }
        }
        return mx;
    }
};