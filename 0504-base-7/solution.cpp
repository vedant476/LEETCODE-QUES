class Solution {
public:
    string convertToBase7(int num) {

        if(num == 0)
            return "0";

        bool negative = false;

        if(num < 0) {
            negative = true;
            num = -num;
        }

        string ans;

        while(num > 0) {
            ans += (num % 7) + '0';
            num /= 7;
        }

        reverse(ans.begin(), ans.end());

        if(negative)
            ans = "-" + ans;

        return ans;
    }
};