class Solution {
public:
    int cnt(int n){
        int sum = 0;

        while(n>0){
            sum += (n%10);
            n /= 10;
        }

        return sum;
    }
    int countLargestGroup(int n) {
        vector<int> freq(45, 0);

        for(int i=1; i<=n; i++){
            int sum = cnt(i);
            freq[sum]++;
        }

        sort(freq.rbegin(), freq.rend());
        int res=0, req=freq[0];
        while(freq[res] == req) res++;

        return res;
    }
};