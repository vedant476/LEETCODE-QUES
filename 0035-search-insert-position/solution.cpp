class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
       for(int i = a.size()-1; i>=0;i--){
        if( a[i]< t) return i+1;
    }
    return 0;
    }
    
};