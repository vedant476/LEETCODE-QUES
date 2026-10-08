class Solution {
public:
    string removeOuterParentheses(string s) {
        string r;
        int l=0;
        for( auto c :s){
            if(c&1 ? --l:l++)
                r += c;
        }
        return r;
    }
};