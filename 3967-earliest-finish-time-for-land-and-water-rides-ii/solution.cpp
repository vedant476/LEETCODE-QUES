class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int minLandFinish = INT_MAX;
        int minWaterFinish = INT_MAX;

        int n = landStartTime.size();
        int m = waterStartTime.size();

        for (int i = 0; i < n; i++) {
            minLandFinish =
                min(minLandFinish,
                    landStartTime[i] + landDuration[i]);
        }

        for (int j = 0; j < m; j++) {
            minWaterFinish =
                min(minWaterFinish,
                    waterStartTime[j] + waterDuration[j]);
        }

        int ans = INT_MAX;

        // Land -> Water
        for (int j = 0; j < m; j++) {
            ans = min(ans,
                      max(minLandFinish + waterDuration[j],
                          waterStartTime[j] + waterDuration[j]));
        }

        // Water -> Land
        for (int i = 0; i < n; i++) {
            ans = min(ans,
                      max(minWaterFinish + landDuration[i],
                          landStartTime[i] + landDuration[i]));
        }

        return ans;
    }
};