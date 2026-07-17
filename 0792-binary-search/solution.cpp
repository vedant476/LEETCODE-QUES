class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l = 0;
        int r = nums.size()-1;
        
            

while ( l<=r){
    int m = (r+l) /2 ;

    if ( t == nums[m]) return m;

    if ( t > nums[m] ){
       l = m+1;
    }

    else{ 
    r = m - 1;
    }
     

    
}
        
        return -1;
    }
};