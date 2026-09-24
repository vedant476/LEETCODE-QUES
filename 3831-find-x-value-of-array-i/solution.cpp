class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> r(k);
        int frq[5] = {0};
        for( auto& n : nums){
           int cur[5] ={0};
           n%=k;
           cur[n] =1;
           for( int i = 0 ; i< k;i++)
           cur[i*n%k] += frq[i];

            for(int i = 0 ;i<k;i++){
                frq[i] = cur[i];
                r[i] += frq[i];
            }
    
           
        }
        return r;
    }
};  