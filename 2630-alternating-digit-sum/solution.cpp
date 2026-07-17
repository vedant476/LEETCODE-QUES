class Solution {
public:
    int alternateDigitSum(int n) {
              if(n>0&&n<10) return n;
        vector<int> digits;
        int ans=0;
while (n > 0) {
        digits.push_back(n% 10);
        n /= 10;                 
    }
    reverse(digits.begin(),digits.end());

    for (int j = 0; j < digits.size(); j+=2)
    {
        ans+=digits[j];
    }
        for (int j = 1; j < digits.size(); j+=2)
    {
            ans-=digits[j];
    }
    

        return ans;
    
    }
};