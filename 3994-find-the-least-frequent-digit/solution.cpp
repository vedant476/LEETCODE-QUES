class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> count(10,0);

        while( n>0){
            count[ n%10]++;
            n/=10;
        }
        int mn = INT_MAX;
        int idx =0;
        for(int i = 0; i<10;i++){
           if(count[i]>0 && count [i]<mn){ idx = i;
           mn = count[i];
           }
            

        }
        return idx;
    }
};