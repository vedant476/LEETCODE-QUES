class Solution:
    def countStaircase(self, nums: list[int]) -> int:
        n =len(nums)
        ans = 0
        max_k = (isqrt(8*n+1)-1)
        for l in range(n):
            freq = {}
            rank = {}
            distinct = 0

            for r in range(l,min(n,l+n)):
                x = nums[r]

                if x not in rank:
                    distinct += 1
                    rank[x] = distinct
                    freq[x] = 0

                freq[x] += 1

                if freq[x] > rank[x]:
                    break

                length = r - l + 1

                if distinct >max_k:
                    break 

                if length == distinct * (distinct + 1)//2:
                    ans += 1
        return ans    