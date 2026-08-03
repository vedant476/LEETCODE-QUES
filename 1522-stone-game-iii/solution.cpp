class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int s1 = 0;
        int s2 = 0;
        int s3 = 0;
        int total = 0;

        for (int i = stoneValue.size() - 1; i >= 0; i--) {
            total += stoneValue[i];

            int current = total - min({s1, s2, s3});

            s3 = s2;
            s2 = s1;
            s1 = current;
        }

        int bob = total - s1;

        if (s1 > bob) {
            return "Alice";
        }

        if (s1 < bob) {
            return "Bob";
        }

        return "Tie";
    }
};