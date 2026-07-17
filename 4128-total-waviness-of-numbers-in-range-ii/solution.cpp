class Solution {
public:

    long long dp[16][2][2][10][3][16];
    long long fun(int pos,int leading_Zeros,int tight,int prev,int greater_or_equal_or_smaller,int total,vector<int>&digits){
        if(pos >= digits.size()){ 
            return total;
        }

        long long res = dp[pos][leading_Zeros][tight][prev][greater_or_equal_or_smaller][total];
        if(~res){
            return res;
        }

        int limit = tight ? digits[pos] : 9;
        long long ans = 0;

        for(int i=0;i<=limit;i++){
            int new_tight = tight && i == limit;
            if(leading_Zeros && i==0){
                ans += fun(pos+1,1,new_tight,prev,greater_or_equal_or_smaller,total,digits);
            }else if(leading_Zeros && i!= 0){
                ans += fun(pos+1,0,new_tight,i,0,0,digits);
            }else if(!leading_Zeros){
                if(i < prev && greater_or_equal_or_smaller == 2){
                    ans += fun(pos+1,0,new_tight,i,1,total+1,digits);
                }else if(i < prev){
                    ans += fun(pos+1,0,new_tight,i,1,total,digits);
                }else if(i > prev && greater_or_equal_or_smaller == 1){
                    ans += fun(pos+1,0,new_tight,i,2,total+1,digits);
                }else if(i > prev){
                    ans += fun(pos+1,0,new_tight,i,2,total,digits);
                }else if(i == prev){
                    ans += fun(pos+1,0,new_tight,i,0,total,digits);
                }
            }
        }
        return dp[pos][leading_Zeros][tight][prev][greater_or_equal_or_smaller][total] = ans;
    }


    long long totalWaviness(long long num1, long long num2) {
        memset(dp,-1,sizeof(dp));
        num1--;
        vector<int>digits1(16,0);
        vector<int>digits2(16,0);
        int i = 15;
        while(num1){
            digits1[i] = num1%10;
            num1/=10;
            i--;
        }
        i = 15;
        while(num2){
            digits2[i] = num2%10;
            num2/=10;
            i--;
        }
        long long t1 = fun(0,1,1,0,0,0,digits1);
        memset(dp,-1,sizeof(dp));
        long long t2 = fun(0,1,1,0,0,0,digits2);

        return t2 - t1;
    }
};