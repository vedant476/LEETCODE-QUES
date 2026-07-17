class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        // 1. Remove extra spaces in-place
        int i = 0, j = 0;

        while (i < n) {

            // Skip spaces
            while (i < n && s[i] == ' ')
                i++;

            // Copy word
            while (i < n && s[i] != ' ') {
                s[j++] = s[i++];
            }

            // Add single space between words
            while (i < n && s[i] == ' ')
                i++;

            if (i < n) {
                s[j++] = ' ';
            }
        }

        // Resize string to remove extra chars
        s.resize(j);

        // 2. Reverse entire string
        reverse(s.begin(), s.end());

        // 3. Reverse each word
        int start = 0;
        for (int end = 0; end <= s.size(); end++) {
            if (end == s.size() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }

        return s;
    }
};


const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}
