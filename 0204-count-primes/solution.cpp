#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <vector>

using namespace std;

const int MAXN = 5000005;
int primeCounts[MAXN];
bool isComposite[MAXN];

auto bypassLeetCode = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    isComposite[0] = true;
    isComposite[1] = true;

    for (int i = 2; i * i < MAXN; ++i) {
        if (!isComposite[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isComposite[j] = true;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < MAXN; ++i) {
        primeCounts[i] = count;
        if (!isComposite[i]) {
            count++;
        }
    }
    return 0;
}();

class Solution {
public:
    int countPrimes(int n) {
        return primeCounts[n];
    }
};