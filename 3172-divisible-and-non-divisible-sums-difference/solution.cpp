class Solution {
public:
    int differenceOfSums(int n, int m) {
        int number=n/m;

        return (n*(n+1)/2)-number*(m*(1+number));  
    }
};