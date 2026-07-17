class Solution {
public:
    bool isPowerOfTwo(int n) {
    if(1>n) return false;
        return !(2147483648%n) ;
    }
};