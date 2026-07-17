class Solution {
public:
    int reverseBits(int n) {
                string s =  bitset<32>(n).to_string();
        reverse(s.begin(),s.end());
        return stoi(s, 0, 2);
    }
};