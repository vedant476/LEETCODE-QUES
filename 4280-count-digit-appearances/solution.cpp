class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for (int i:nums){
            if(i==0&&digit==0) {
                cnt++;
                continue;
            }
            while(i>0){
                if(i%10==digit){
                    cnt++;
                }
                i/=10;
            }
        }
        return cnt;
    }
};