class Solution {
public:
    int dominantIndex(vector<int>& a) {
        int n = a.size();
        int it = distance(begin(a), max_element(begin(a), end(a)));

        nth_element(begin(a), begin(a) + n - 2, end(a));

        return a[n-2] * 2 <= a[n-1] ? it : -1;
    }
};