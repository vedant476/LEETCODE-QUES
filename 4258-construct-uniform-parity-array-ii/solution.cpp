class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn =INT_MAX;
        bool flag = false;
  for (int x : nums1) {
            if (x % 2)
                flag = true;

            mn = min(mn, x);
        }
        if(mn%2) return true;


        return !flag;
    }
};