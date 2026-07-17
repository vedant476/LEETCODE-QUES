class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ns;
        vector<int> result;
        int n1 = nums1.size(), n2 = nums2.size();
        for(int i = 0; i < n1; ++i) {
            ns.insert(nums1[i]);
        }

        for(int i = 0; i < n2; ++i) {
            if(ns.count(nums2[i])) {
                result.push_back(nums2[i]);
                ns.erase(nums2[i]);
            }
        }

        return result;
    }
};