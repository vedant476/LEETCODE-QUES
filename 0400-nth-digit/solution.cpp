class Solution {
public:
    int findNthDigit(int n) {
        long long d =9;
        int f =1;
        int l =1;

        while(n>d*l){
            n-= d*l;
            l++;
            f *= 10;
            d *= 10;
        }
        f = f + (n-1)/l;
        string s = to_string(f);
        return s[(n-1)%l]-'0';
    }
};