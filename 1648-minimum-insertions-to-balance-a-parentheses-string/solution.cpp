
class Solution {
public:
    int minInsertions(string s) {
        int r =0,t=0;

        for (char c :s) {
            if (c == '(') {
                if(t%2) r++,t++;
                else t+=2;
            } 
            else if(t == 0) r++, t=1;
            else t--;
            
        }

        return r+t;
    }
};
