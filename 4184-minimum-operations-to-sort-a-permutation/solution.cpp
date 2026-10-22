class Solution {
public:
    int minOperations(auto& A) {
        int n =A.size();
        int a =1,d=1;
        for( int i=1 ;i<n;i++){
            a += A[i] == (A[i - 1] + 1) % n;
            d += A[i - 1] == (A[i] + 1) % n; 
        }
        if( a == n)
            return A.front() ? min(n - A.front(), A.front() + 2) : 0;
        if (d == n)
            return min(n - A.back(), A.back()) + 1;
        return -1;
    }
};