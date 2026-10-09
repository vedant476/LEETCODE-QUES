class Solution {
public:
    static bool canReach(vector<int>& arr, int i) {
        int x=arr[i];
        if (x==0) return 1;
        arr[i]=-1;
        int l=i-x, r=i+x;
        if (l>=0 && arr[l]>=0) 
            if (canReach(arr, l)) return 1;
        if (r<arr.size() && arr[r]>=0) 
            if (canReach(arr, r)) return 1;
        return 0;
    }
};