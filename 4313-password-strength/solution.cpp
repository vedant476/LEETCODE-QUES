class Solution {
public:
    int passwordStrength(string password) {
        int s=0;
        vector<int> m(257);
        for(int i=0;i<password.size();++i){
            char c=password[i];
            if (m[c]++ == 0) {
                if (islower(c)) s += 1;
                else if(isupper(c))s+=2;
                else if(isdigit(c))s+=3;
                else if(c=='!'||c=='@'||c=='#'||c=='$')s+=5;
            }
        }
        return s;
    }
};