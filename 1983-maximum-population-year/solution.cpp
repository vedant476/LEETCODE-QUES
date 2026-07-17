class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
       vector<int> diff(101, 0);

for(int i =0;i< logs.size();i++)
{
    diff[logs[i][0]-1950]++;
    diff[logs[i][1]-1950]--;
}

int curr = 0;
int mx = 0;
int ans = logs[0][0];

for(int i =0;i<diff.size();i++)
{
    curr += diff[i];

    if(curr > mx)
    {
        mx = curr;
        ans = 1950 + i;
    }
}
return ans; 
    }
};