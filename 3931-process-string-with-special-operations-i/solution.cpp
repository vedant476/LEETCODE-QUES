class Solution {
public:
    string processStr(string s) {
        deque<char> dq;
        bool rev = false;

        for (char ch : s) {

            if (ch >= 'a' && ch <= 'z') {
                if (!rev) dq.push_back(ch);
                else dq.push_front(ch);
            }

            else if (ch == '*') {
                if (!dq.empty()) {
                    if (!rev) dq.pop_back();
                    else dq.pop_front();
                }
            }

            else if (ch == '%') {
                rev = !rev;
            }

            else if (ch == '#') {
                if (dq.empty()) continue;

                deque<char> copy = dq;

                if (!rev) {
                    for (char c : copy)
                        dq.push_back(c);
                } else {
                    for (auto it = copy.rbegin(); it != copy.rend(); it++)
                        dq.push_front(*it);
                }
            }
        }

        string ans;

        if (!rev) {
            for (char c : dq) ans += c;
        } else {
            for (auto it = dq.rbegin(); it != dq.rend(); it++)
                ans += *it;
        }

        return ans;
    }
};