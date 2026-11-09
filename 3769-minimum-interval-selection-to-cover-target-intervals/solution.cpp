class Solution {
public:
    int minSelection(vector<vector<int>>& a, vector<vector<int>>& t) {
        sort(a.begin(),a.end());
        sort(t.begin(),t.end());
        int i=0,n=a.size(),best=INT_MIN,reach=INT_MIN,cnt=0;
        for(auto &x:t){
            int L=x[0],R=x[1];
            while(reach< R){
                int need=max(reach,L);
                while(i<n && a[i][0] <=need)best=max(best,a[i++][1]);
                
                if(best < need || best <=reach)return -1;
                reach=best;
                cnt++;
            }
        }
        return cnt;
    }
};