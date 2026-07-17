class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        for(int i=0;i<n;++i)
        {
            int ind=n-i;
            if(citations[i]>=ind)
            {
                return ind;
            }
        }
        return 0;
    }
};