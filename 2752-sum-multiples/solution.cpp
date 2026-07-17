class Solution {
public:
    int sumOfMultiples(int n) {
        int v = 0; 
        for ( int i =3;i<=n;i++){
            if( i%3==0||i%5==0||i%7==0)  v += i;
        }
        return v;
    }
};