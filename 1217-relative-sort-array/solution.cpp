class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int ind = 0;

        // Step 1: arr2 ke according place karo
        for(int i = 0; i < arr2.size(); i++){
            for(int j = 0; j < n; j++){
                if(arr2[i] == arr1[j]){
                    swap(arr1[ind], arr1[j]); // FIX: overwrite nahi, swap
                    ind++;                   // FIX: increment after placing
                }
            }
        }

        // Step 2: remaining elements ko sort karo
        sort(arr1.begin() + ind, arr1.end());

        return arr1;
    }
};