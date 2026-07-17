class Solution {
public:
    double average(vector<int>& salary) {
        
        int sum = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int i = 0; i < salary.size(); i++) {
            sum += salary[i];

            mn = min(mn, salary[i]);
            mx = max(mx, salary[i]);
        }

        return (double)(sum - mn - mx) / (salary.size() - 2);
    }
};