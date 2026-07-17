
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2")

using namespace std;
static const size_t ARENA_SIZE = 1 << 26; 
alignas(max_align_t) static unsigned char arena[ARENA_SIZE];
static size_t arena_pos = 0;

void* operator new(size_t sz) {
    size_t aligned = (sz + alignof(max_align_t) - 1) & ~(alignof(max_align_t) - 1);
    if (arena_pos + aligned > ARENA_SIZE) {
        throw bad_alloc();
    }
    void* ptr = arena + arena_pos;
    arena_pos += aligned;
    return ptr;
}

void operator delete(void*) noexcept {}
void operator delete(void*, size_t) noexcept {}


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int> mp;
        queue<int> q;

        for (int i=0 ; i<s.size() ; i++){
            if (mp.find(s[i]) == mp.end()){
                q.push(i);
            }

            mp[s[i]]++;
        }

        while (!q.empty() && mp[s[q.front()]] > 1) q.pop();

        return q.empty() ? -1 : q.front();
    }
};