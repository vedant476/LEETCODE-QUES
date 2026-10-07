class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int,int>,int>m;
        for( auto P : rectangles){
            m[{P[0],P[1]}]++;
            m[{P[2],P[3]}]++;
            m[{P[0],P[3]}]--;
            m[{P[2],P[1]}]--;
        }
        int sum = 0;
        for( auto it : m){
            sum += abs(it.second);
        }
        return sum == 4;
    }
};