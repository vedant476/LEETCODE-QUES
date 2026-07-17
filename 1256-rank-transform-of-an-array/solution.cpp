class Solution {
public:

    vector<int> arrayRankTransform(vector<int>& arr) {
       set<int> s(arr.begin(),arr.end());
        
        unordered_map<int, int> rank;
        int r = 1;

         for ( int i : s ){
             rank[i] = r++;
        }

    for (int &x : arr)
            x = rank[x];

       return arr;
    }
};