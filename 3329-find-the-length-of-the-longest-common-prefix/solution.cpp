class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
      unordered_set<string> st;
        for(int i = 0; i < arr1.size(); i++) {

            string s = to_string(arr1[i]);

            string temp = "";

            for(char ch : s) {

                temp += ch;

                st.insert(temp);
            }
        }

        int ans = 0 ; 
        for(int i = 0; i < arr2.size(); i++) {

            string s = to_string(arr2[i]);

            string temp = "";

            for(char ch : s) {

                temp += ch;

                // agar prefix exist karta hai
                if(st.find(temp) != st.end()) {

                    ans = max(ans, (int)temp.size());
                }
            }
        }

        return ans;
    }
};