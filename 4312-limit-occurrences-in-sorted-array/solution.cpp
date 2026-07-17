class Solution {
public:
    vector<int> limitOccurrences(vector<int>& a, int k) {
        int n = a.size();
        int idx = 0;

        for(int x : a){
            if(idx < k || x != a[idx-k]){
                a[idx] = x;
                idx++;
            }
        }
        a.resize(idx);

        return a;
    }
};