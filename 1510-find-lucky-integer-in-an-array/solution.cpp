class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> count(501,0);
        int mx=-1;
        for(int i = 0 ; i< arr.size();i++){
            count[arr[i]]++;
        }
        for(int i = 1; i< count.size();i++){
            if( count[i]== i){
            mx = max(mx,i);
            } 
        }

    return mx;
    }
};