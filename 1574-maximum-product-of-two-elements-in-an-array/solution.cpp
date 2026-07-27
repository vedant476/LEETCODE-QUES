class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n1=0,n2=0;
        for( int d : nums){
           if( d > n1){
            n2 = n1;
            n1 = d;

           }
           else if(n2<d){
            n2 = d;
           }
        }
        return (n1-1)*(n2-1);

    }
};