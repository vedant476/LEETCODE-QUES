#define md 1000000007
class Solution {
public:

int sumDistance(vector<int>& nums, string s, int d) {
    long long n=nums.size();
    vector<long long>nums1(nums.begin(),nums.end());
    for(long long i=0;i<n;i++){
        if(s[i]=='L')nums1[i]-=d;
        else nums1[i]+=d;

    }
    
//An efficient solution for this problem needs a simple observation. Since array is sorted and elements are distinct when we take sum of absolute difference of pairs each element in the i’th position is added ‘i’ times and subtracted ‘n-1-i’ times.
sort(nums1.begin(),nums1.end());
for(long long i=0;i<n;i++)nums1[i]%=md;
long long answer=0;
for(long long i=0;i<n;i++){
    long long temp1=(i*nums1[i])%md;
    long long temp2=((n-1-i)*nums1[i])%md;
    answer+=((temp1-temp2));
    answer%=md;
    if(answer<0)answer+=md;//Very Important step to do.
}
answer%=md;
return (int)answer;
    }
};