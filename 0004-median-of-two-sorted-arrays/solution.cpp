class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int o = m+n;
        int temp[o];
        for(int i = 0;i<m;i++){
        temp[i] = nums1[i];
    }
         for(int i = 0;i<n;i++){
        temp[m+i] = nums2[i];
         }
        sort(temp, temp + o);
                if (o % 2 != 0) {
        return temp[o / 2];
    } else {
        return (temp[o / 2 - 1] + temp[o / 2]) / 2.0;
    }

    }
};
