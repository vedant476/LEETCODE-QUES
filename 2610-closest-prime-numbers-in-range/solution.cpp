class Solution {
public:

    bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

    vector<int> closestPrimes(int left, int right) {
        vector<int> v;
        int i =left;
        while(i<=right){
            if(isPrime(i)) v.push_back(i);
            i++;
        }
        if( v.size()<2) return {-1,-1};
        int mn = INT_MAX;
vector<int> ans = {-1,-1};

for(int i = 1; i < v.size(); i++) {

    int diff = v[i] - v[i-1];

    if(diff < mn) {
        mn = diff;
        ans = {v[i-1], v[i]};
    }
}

        return ans;
    }
};