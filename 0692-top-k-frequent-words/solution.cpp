class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freqMap;
        for (const string& word : words) {
            freqMap[word]++;
        }
        vector<pair<string, int>> elementVector(freqMap.begin(), freqMap.end());
        sort(elementVector.begin(), elementVector.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;  
        });
        vector<string> result;
        for (int i = 0; i < k; i++) {
            result.push_back(elementVector[i].first);
        }
        
        return result;
    }
};