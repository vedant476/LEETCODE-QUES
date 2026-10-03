class Solution {
public:
    int largestPerimeter(vector<int>& T) {
        sort(T.begin(),T.end());
        for( int i =T.size()-3;i>=0;--i){
             if(T[i]+T[i+1] > T[i+2])
                return T[i]+T[i+1]+T[i+2];
        }
        return 0;
    }
};