class Solution {
public:

    int longestPalindrome(string s) {

        vector<int> cnt(128,0);

        // frequency count
        for(char ch : s) {

            cnt[ch]++;
        }

        int ans = 0;

        bool oddFound = false;

        for(int i : cnt) {

            // even frequency
            if(i % 2 == 0) {

                ans += i;
            }

            // odd frequency
            else {

                ans += i - 1;

                oddFound = true;
            }
        }

        // one odd can sit in center
        if(oddFound) {

            ans += 1;
        }

        return ans;
    }
};