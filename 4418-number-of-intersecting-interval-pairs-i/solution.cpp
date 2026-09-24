class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int cnt = 0;
        sort(intervals.begin(),intervals.end());
        for( int i = 0;i< intervals.size();i++){
            for( int j = 0 ; j< intervals.size();j++){
               if( intervals[i][1]>=intervals[j][0]&&intervals[i][0]<=intervals[j][0]&&i<j){
                   cnt++;
               }
            }
        }
        return cnt;
    }
};