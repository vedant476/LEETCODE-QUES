class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
int c  = 0 , mx = 0;
for( int i : nums){ 
    if ( i == 1) {
    c++;
    if(c>mx) mx =c;
    }
    else 
    c= 0;
    

}
return mx;
    }
};