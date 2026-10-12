class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        vector<pair<int,char>> v;
        for(auto [ch,cnt] : freq){
            v.push_back({cnt,ch});
        }
        sort(v.rbegin(),v.rend());


        string ans="";
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].first;j++){
                ans+=v[i].second;
            }
        }
        return ans;
    }
};