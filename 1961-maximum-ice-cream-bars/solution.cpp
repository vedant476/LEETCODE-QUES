class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxi = 0;
        for(int i=0;i<costs.size();i++){
            maxi = max(maxi,costs[i]);
        }
        vector<int> count(maxi+1,0);
        for(int i=0;i<costs.size();i++){
            count[costs[i]]++;
        }
        int ans = 0;
        for(int i=1;i<=maxi;i++){
            if(coins-(1LL)*count[i]*i>=0){
                coins = coins-count[i]*i;
                ans += count[i];
            }
            else{
                ans += coins/i;
                break;
            }
        }
        return ans;
    }
};