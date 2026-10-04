class Solution {
public:
    int minRotations(string s) {
        int sum = 0;
        int curr = 0;

        for( int i = 0 ;i<s.size();i++){
            int in = s[i]-'0';
            int diff = abs(curr - in);
            sum += min(diff,10-diff);
    
            curr = in;
        }

        return sum ;
    }
};