class Solution {
public:
int waviness(int x)
{
    string s=to_string(x);

    if(s.size()<3)
        return 0;

    int ans=0;

    for(int i=1;i+1<s.size();i++)
    {
        if(s[i]>s[i-1] && s[i]>s[i+1])
            ans++;

        else if(s[i]<s[i-1] && s[i]<s[i+1])
            ans++;
    }

    return ans;
}

long long solve(int L,int R)
{
    long long ans=0;

    for(int x=L;x<=R;x++)
        ans+=waviness(x);

    return ans;
}
    int totalWaviness(int num1, int num2) {
        return solve ( num1,num2);

    }
};