class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int> cnt;
        int ans =0, l=0;
        for( int r =0;r<s.size();r++){
            auto& c = cnt[s[r]];
            c++;
            while(c>2){
                auto out = s[l++];
                cnt[out]--;

            }
            ans = max(ans, r-l+1);


        }

        return ans;
    }
};