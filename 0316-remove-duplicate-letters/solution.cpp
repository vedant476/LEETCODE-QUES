class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        unordered_map<char, int> frq;
        vector<bool> inStack(26, false);

        for (auto ch : s) {
            frq[ch]++;
        }

        for (auto ch : s) {
            frq[ch]--;
            if (inStack[ch - 'a'])
                continue;
            while (!st.empty() && (st.top() > ch) && frq[st.top()] > 0) {

                inStack[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(ch);
            inStack[ch - 'a'] = true;
        }
        string ans = "";

        while (!st.empty()) {
            ans += (st.top());
            char top = st.top();
            st.pop();
            inStack[top - 'a'] = false;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};