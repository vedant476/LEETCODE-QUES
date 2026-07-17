class Solution {
public:
    int countDigits(int n) {
        int og =n;
        int v = 0;
        while ( og ){
            int t = og%10;
            if(!(n%t)) v++;
            og /= 10; 
        }
        return v;
    }
};