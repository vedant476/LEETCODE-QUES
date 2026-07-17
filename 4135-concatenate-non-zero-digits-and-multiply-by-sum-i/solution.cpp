class Solution {
public:

    long long sumAndMultiply(int n) {
        vector<int> v;
        long long sum = 0; 
        while( n != 0){
            sum += n % 10;
            if(n%10) v.push_back(n%10);
            n /=10;
        }
    for( int i = v.size()-1;i>=0;i--){
                n = v[i]+n *10;
    }
    return n * sum;
        
    }
};