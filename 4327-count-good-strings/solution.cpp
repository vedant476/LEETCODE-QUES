class Solution {
public:
int mod = 1e9 +7;
    pair<long long,long long> fib(long long n){
        if( n == 0) return {0,1};

        auto [a,b] = fib(n/2);
        long long c = a*((2*b -a + mod)%mod ) % mod;
        long long d = (a*a % mod + b*b %mod)%mod;
        if(n%2 == 0){
            return {c,d};
        }
        else return {d, (c+d) % mod};
    }
    int countGoodStrings(long long n) {
        long long a = fib(n).first;
        a = (a*2)%mod;
        return a;
    }
};