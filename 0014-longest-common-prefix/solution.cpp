class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string r = strs[0];
        for(int i= 0; i< strs.size();i++){
            while(strs[i].find(r)!=0){
                r.pop_back();
            }
        }
        return r;
    }
};