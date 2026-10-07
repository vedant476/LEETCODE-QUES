class Solution {

    void remove(string s, int sS,int dS,char o,char c,vector<string>&v){
        int b = 0;

        for( int i = sS;i<s.size();i++){
            if(s[i] == o) b++;
            else if(s[i] == c) b--;

            if(b>=0){
                continue;
            }
            for(int j = dS;j<= i;j++){
                if( s[j] == c && (j == dS || s[j-1] != c)){
                    remove(s.substr(0,j) + s.substr(j+1),i,j,o,c,v);
                }
            }
            return;
        }
        reverse(s.begin(),s.end());

        if(o =='('){
            remove(s,0,0,')','(',v);
        }
        else {
            v.push_back(s);
        }

    }
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> v;
        remove(s,0,0,'(',')',v);
        return v;
    }
};