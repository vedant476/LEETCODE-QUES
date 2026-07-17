class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int mxl= 0;
        int mxr = 0;
        for( int i = 0; i<left.size();i++){
            if( mxl<left[i]){
                mxl = left[i];
            }
        }
                for( int i = 0; i<right.size();i++){
            if( mxr<n-right[i]){
                mxr =n-right[i];
            }
    }
    return max(mxr,mxl);
    }
};