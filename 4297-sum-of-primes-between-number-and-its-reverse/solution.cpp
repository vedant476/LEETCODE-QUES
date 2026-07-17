class Solution {
public:
    bool isPrime(int n) {
    if (n <= 1) return false;      
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) return false; 
    }
    return true;
}
int rev(int n){
    int r = 0;

    while(n > 0){
        r = r * 10 + (n % 10);
        n /= 10;
    }

    return r;
}

    int sumOfPrimesInRange(int n) {
        int  m = rev(n);
        int mx = max(m,n);
        int mn = min(m,n);
        int sum = 0;

        for ( int i =mn; i<=mx;i++ ){
            if(isPrime(i)) sum += i;
        }
        return sum;
    }
};