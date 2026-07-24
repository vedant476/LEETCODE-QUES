class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        vector<int> st(4050,0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int x=nums[i] ^ nums[j];
               st[x]=1;
            }
        }
        int ans=0;

        for(int i=0;i<2049;i++){
            for(int j=0;j<n;j++){
                int fi=i^nums[j];
    
                if(st[fi]){
                    ans++;
                    break;
                }
            }
        }
    return ans;
    }
};