class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum=0;
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i=0;i<cost.size();i++){
          if((i+1)%3!=0){
            sum+=cost[i];
          }
        }
        return sum;
    }
};