static const bool __boost = []() {
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return std::ios_base::sync_with_stdio(false);
}();

const size_t BUFFER_SIZE = 0x3000000;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void* operator new(size_t size) {
    constexpr std::size_t alignment = alignof(std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;
    char* aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;
    return aligned_ptr;
}

void operator delete(void* ptr, unsigned long) {}

void operator delete(void* ptr) {}

void operator delete[](void* ptr) {}

class Solution {
public:
    int strStr(string haystack, string needle) {
        // if (haystack == needle)
        //     return 0;
        int l = haystack.size() - needle.size() + 1;
        for (int i = 0; i < l; i++) {
            if (haystack[i] == needle[0]) {
                int j = i + 1;
                for (int k = 1; k < needle.size(); k++) {
                    if (haystack[j] != needle[k])
                        continue;
                    j++;
                }
                if((j-i)==needle.size()){
                    return i;
                }
            }
        }
        return -1;
    }
};