class Solution {
public:
    bool isPerfectSquare(int n) {
          int s = sqrt(n);
    if ( s*s == n ){ return 1;}
return 0;
    }
};