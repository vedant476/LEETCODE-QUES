class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        return reduce(source.begin(), source.end(), 0LL) ==
               reduce(target.begin(), target.end(), 0LL);
    }
};