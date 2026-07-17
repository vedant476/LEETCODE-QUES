class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>st;
        for(auto it:arr){
            if(it%2==0 && st.find(it/2)!=st.end() || st.find(it*2)!=st.end())return true;
            st.insert(it);
        }
        return false;
    }
};