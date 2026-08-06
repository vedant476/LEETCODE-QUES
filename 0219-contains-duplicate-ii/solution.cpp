class Solution {
private:
    static uint32_t hashInt(uint32_t x) noexcept {
        x ^= x >> 16;
        x *= 0x7feb352dU;
        x ^= x >> 15;
        x *= 0x846ca68bU;
        x ^= x >> 16;
        return x;
    }

public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        const int n = static_cast<int>(nums.size());

        if (k == 0 || n < 2) {
            return false;
        }


        if (k <= 8) {
            for (int i = 1; i < n; ++i) {
                const int left = max(0, i - k);

                for (int j = i - 1; j >= left; --j) {
                    if (nums[i] == nums[j]) {
                        return true;
                    }
                }
            }

            return false;
        }

        int capacity = 1;

        while (capacity < n * 2) {
            capacity <<= 1;
        }

        const int mask = capacity - 1;

        vector<int> table(capacity);

        for (int i = 0; i < n; ++i) {
            const int value = nums[i];
            int position =
                static_cast<int>(hashInt(static_cast<uint32_t>(value))) & mask;

            while (true) {
                const int stored = table[position];

                if (stored == 0) {
                    table[position] = i + 1;
                    break;
                }

                const int previousIndex = stored - 1;

                if (nums[previousIndex] == value) {
                    if (i - previousIndex <= k) {
                        return true;
                    }

                 
                    table[position] = i + 1;
                    break;
                }

                position = (position + 1) & mask;
            }
        }

        return false;
    }
};