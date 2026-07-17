class Solution {
public:
    bool isThree(int n) {
        int v=2;
        for( int i = 2;i<n;i++){
            if( n%i == 0) v++;
        }
        return (v==3)? true : false;
    }
};