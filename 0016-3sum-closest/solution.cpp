class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {


        sort(nums.begin(),nums.end());
        int n = nums.size();
        int sum = nums[0]+ nums[1]+ nums[n-1];



for(int i =0;i<n-2;i++){
    int j = i+1;
    int k = n-1;

while(j<k){
    
    int curr = nums[i]+nums[j]+nums[k];
    int currDiff = abs(target - curr);
    if (currDiff < abs(target-sum)) sum = curr;

    if(curr<target){
      ++j;
    }
    else if(curr>target){
        --k;
    }
    else {
        return curr;
    }

}



}

return sum;
        
    }
};

const size_t BUFFER_SIZE = 0x6fafffff;
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