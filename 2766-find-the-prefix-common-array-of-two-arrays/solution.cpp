class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> freq( A.size()+ 1, 0);
vector<int> ans;

int common = 0;

for(int i = 0; i < A.size(); i++){

    freq[A[i]]++;

    if(freq[A[i]] == 2)
        common++;

    freq[B[i]]++;

    if(freq[B[i]] == 2)
        common++;

    ans.push_back(common);
}
return ans;
    }
};