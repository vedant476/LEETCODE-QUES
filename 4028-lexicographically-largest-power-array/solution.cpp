class Solution {
    vector<int> res;
    vector<int> done;

    void f(const vector<int>& A, int i) {
        if (i == 15) return;
        if (done[i]) {
            f(A, i + 1);
            return;
        }
        vector<int> L, R;
        for (int a : A) {
            if (a & (1 << (14 - i))) {
                L.push_back(a);
            } else {
                R.push_back(a);
            }
        }
        if (!L.empty()) {
            res[i] += L.size();
            f(L, i + 1);
        }
        if (!R.empty()) {
            done[i] = 1;
            f(R, i + 1);
        }
    }

public:
    vector<int> largestPower(vector<int>& A) {
        res.assign(15, 0);
        done.assign(15, 0);
        f(A, 0);
        return res;
    }
};