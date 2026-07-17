class Solution {
public:
    int maxFreqSum(string s) {
        int vmax = 0, cmax = 0;
        int freq[26] = {0};
        for(int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vmax = std::max(vmax,freq[s[i] - 'a']);
            }
            else    cmax = std::max(cmax,freq[s[i] - 'a']);
        }
        return vmax + cmax;
    }
};