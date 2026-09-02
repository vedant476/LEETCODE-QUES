class Solution {
public:
    string smallestPalindrome(string s, int k) {
        int n = s.size() / 2;
        int ct[26] = {0};

        for (int i = 0; i < n; i++) {
            ct[s[i] - 'a']++;
        }

        int idx = 0;

        long long num = 1;

        int j = 25;
        int running_mult = 1;
        for (int i = 1; i <= n; i++) {
            while (running_mult > ct[j]) {
                running_mult = 1;
                j--;
            }

            num *= i;
            num /= running_mult;
            running_mult++;

            if (num > k) {
                for (int m = 0; m < 26; m++) {
                    while (idx + i < n && ct[m] > 0) {
                        s[s.size() - idx - 1] = 'a' + m;
                        s[idx++] = 'a' + m;
                        ct[m]--;
                    }
                }

                break;
            }
        }

        if (k > num) {
            return "";
        }

        if (n == 0) {
            return s;
        }

        while (idx < n && k > 0) {
            for (int i = 0; i < 26; i++) {
                if (ct[i] == 0) {
                    continue;
                }

                long long span = num * ct[i] / (n - idx);

                if (k == span) {
                    k -= span;
                    s[s.size() - idx - 1] = 'a' + i;
                    s[idx++] = 'a' + i;
                    num = span;
                    ct[i]--;
                    break;
                } else if (k > span) {
                    k -= span;
                } else {
                    s[s.size() - idx - 1] = 'a' + i;
                    s[idx++] = 'a' + i;
                    num = span;
                    ct[i]--;
                    break;
                }
            }
        }

        for (int i = 25; i >= 0; i--) {
            while (ct[i] > 0) {
                s[s.size() - idx - 1] = 'a' + i;
                s[idx++] = 'a' + i;
                ct[i]--;
            }
        }

        return s;
    }
};