class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> v(10,0);
        int sum = 0;
        while( n!=0){
            v[n%10]++;
            n/=10;
        }
        for(int i = 0; i< v.size();i++){
            sum = sum + v[i]*i;
        }
        return sum;
    }
};