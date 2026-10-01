class Solution {
public:
    string toHex(int num) {
        unsigned int N = num;
        string s = "";
        char H[17] = "0123456789abcdef";

        do{
            s += H[N%16];
            N/=16;

        }while(N);

    return {s.rbegin(),s.rend()};
    }
};