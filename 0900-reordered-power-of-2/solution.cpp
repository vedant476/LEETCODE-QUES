class Solution {
public:
    string normalise(int n){
        string s = to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
    
    bool reorderedPowerOf2(int n) {
        string target = normalise(n);
        for(int i = 0; i < 31; i++){
            int power = 1 << i;
            if(normalise(power) == target)return true;
        }
        return false;
    }
};