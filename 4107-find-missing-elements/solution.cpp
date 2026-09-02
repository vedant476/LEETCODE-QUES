class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int> present(101, 0);
        int mn = 101;
int mx = 0;

for(int x : nums)
{
    present[x] = 1;
    mn = min(mn, x);
    mx = max(mx, x);
}
vector<int>v;
for(int i = mn + 1; i < mx; i++)
{
    if(!present[i])
        v.push_back(i);
}

return v;
    }
};