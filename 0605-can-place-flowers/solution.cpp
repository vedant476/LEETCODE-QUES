class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int c=0; 
        for(int i = 0; i <=arr.size()-1;i++){
            if(arr[i]==0 && (i == 0 || arr[i-1] == 0) && (i == arr.size()-1 || arr[i+1] == 0) ) {
                c++;
                arr[i]=1;

                }
        }
        return c>=n ? 1:0;
    }
};