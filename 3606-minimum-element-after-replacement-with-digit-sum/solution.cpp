class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=INT_MAX;
        for(int n:nums){
            int s=0;
            while(n){
                s+=n%10;
                n/=10;
            }
            if(s<min)min=s;
        }
        return min;
    }
};