class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for( int i : nums){
            sum+= i;
        }
        int t = sum - x;

        if (t == 0)
            return nums.size();

        if (t < 0)
            return -1;

        int r =0,l = 0;
        int ss =0;
        int mx =0;
        for( int r = 0;r< nums.size();r++){
                ss+=nums[r];
 
            while( ss > t ){
                ss-= nums[l]; 
                l++;
            }
            if( ss == t){
            mx = max(mx,r-l+1);
            }
           

        } 

        if (mx == 0)
            return -1;

        return nums.size() - mx;
    }
};