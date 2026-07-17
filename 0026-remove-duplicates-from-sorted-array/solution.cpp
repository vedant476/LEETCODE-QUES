#pragma GCC optimize("Ofast")

#include <iostream>
#include <vector>

static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;

void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return &BUFFER[pos - size];
}

void *operator new[](const std::size_t size) {
    return operator new(size);
}

void operator delete(void *) noexcept {}

void operator delete[](void *) noexcept {}

void operator delete(void *, std::size_t) noexcept {}

void operator delete[](void *, std::size_t) noexcept {}
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        nums.push_back(-1000);
        if (nums.size() == 1) {
            return 1;
        }
        for (auto it = nums.begin(); (it + 1) != nums.end();) {
            if (*it == -1000) {
                break;
            }
            if (*it == *(it + 1)) {
                it = nums.erase(it);
                nums.push_back(-1000);

            } else {
                ++it;
                ++count;
            }
        }
        nums.pop_back();
        return count;
    }
};