class Solution {
public:
    int minMovesToSeat(vector<int>& s, vector<int>& st) {
         std::sort(s.begin(), s.end()); 
         std::sort(st.begin(), st.end()); 
        int c = 0;
        for (int i = 0;i < st.size();i++){
            c+= abs(s[i] - st[i]);
        }
        return c;
    }
};