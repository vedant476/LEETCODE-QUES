class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = 0;
        for ( int i : nums){
            if(!i) return 0;
            if( i<0) n++;
        }
        return n%2 == 0 ? 1:-1; 
    }
};