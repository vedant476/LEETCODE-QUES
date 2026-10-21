class Solution {
public:
    int minOperations(string s) {
        char minC = 'z', maxC = 'a';
        for (const char& c : s) {
            minC = min(minC, c);
            maxC = max(maxC, c);
        }

        int n = s.size();
        if (is_sorted(s.begin(), s.end())) return 0;
        if (s[0] == minC || s[n - 1] == maxC) return 1;
        for (int i = 1; i < n - 1; i += 1) {
            if (s[i] == minC || s[i] == maxC) return 2;
        }
        return (n == 2) ? -1 : 3;
    }
};