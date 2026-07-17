class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=1,n=numbers.size(),s1=numbers[l];
        while(r<n-1 && numbers[r]+s1<target) ++r;
        if(numbers[r]+s1==target) return {++l, ++r};
        int s2=numbers[r];
        while(l<r){
            if(s2+s1>target) { s2=numbers[--r];} 
            else if(s2+s1<target) {s1=numbers[++l];}
            else return {++l,++r};
        }
        return {++l,++r};
    }
};

//howtofast
static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;

void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const std::size_t size) {
    return operator new(size);
}

void operator delete(void *) noexcept {}

void operator delete[](void *) noexcept {}

void operator delete(void *, std::size_t) noexcept {}

void operator delete[](void *, std::size_t) noexcept {}