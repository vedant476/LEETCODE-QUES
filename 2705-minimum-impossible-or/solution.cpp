
static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {

        unsigned int bitmask = 0;

        for (int x : nums) {

            if ((x & (x - 1)) == 0) {

                bitmask |= x; 

            }
        }

        for (int i = 0; i < 31; ++i) {
            if (!(bitmask & (1 << i))) {
                return (1 << i);
            }
        }
        
        return 1 << 31;
    }
};