class Solution {
public:
    long long perm(vector<int>& freq) {
        long long res = 1;
        int len = 0;
        for (int f : freq) {
            for (int i = 1; i <= f; i++) {
                len++;
                res = (res * len) / i;
                if (res > 2000000) return 2000001; 
            }
        }
        return res;
    }

    string smallestPalindrome(string s, int k) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;
        
        int n = s.size() / 2;
        string str = "";
        string mid = "";
        vector<int> total_freq(26, 0); 
        
        for (int i = 0; i < 26; i++) {
            str += string(freq[i] / 2, 'a' + i);
            total_freq[i] = freq[i] / 2;
            if (freq[i] % 2 != 0) {
                mid += (char)('a' + i);
            }
        }
        if (n == 0) return mid; 

        if (perm(total_freq) < k) return "";

        int right = n - 1;
        int left = right;
        long long pos = 1;
        vector<int> window(26, 0);
        if (n > 0) window[str[left] - 'a']++;

        while (left > 0) {
            long long curr = perm(window);

            if (curr + pos - 1 < k) {
                left--;
                window[str[left] - 'a']++;
            } else {
                break; 
            }
        }

        for (int i = left; i <= right; i++) {
            for (int c = 0; c < 26; c++) {
                if (window[c] > 0) {
                    
                    window[c]--;
                    long long temp = perm(window);
                    
                    if (pos + temp - 1 >= k) {
                        str[i] = 'a' + c;
                        break; 
                    } else {
                        pos += temp;
                        window[c]++;
                    }
                }
            }
        }
        
        string rev = str;
        reverse(rev.begin(), rev.end());
        return str + mid + rev;
    }
};