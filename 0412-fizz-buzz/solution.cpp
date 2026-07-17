class Solution {
public:
bool fv(int m){
    return (m%5==0);
}
bool th( int m){
    return (m%3==0);
}
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for ( int i = 1; i<=n;i++){
            if( fv(i) && th(i) ){ 
            v.push_back("FizzBuzz");
            continue;
        }
            else if( fv(i) ) {v.push_back("Buzz");
            continue;
            }
            else if( th(i) ) {v.push_back("Fizz");
            continue;
            }
            v.push_back(to_string(i));
        }
        return v;
    }
};