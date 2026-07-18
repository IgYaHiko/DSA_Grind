class Solution:
    def contiguousList(self, nums: list[int]) -> int:
        zero = 0
        one = 0
        res = 0
        freq = {}
        for i in range(len(nums)):
            if nums[i] == 0:
               zero += 1
            else:
               one += 1
            diff = zero - one
            if diff == 0:
               res = max(res, i+1)
               continue
            if diff not in freq:
               freq[diff] = i
            else:
               idx = freq.get(diff,0)
               length = i - idx
               res = max(res, length)
        return res

sol = Solution()
ans = sol.contiguousList([0,1,1,1,1,1,0,0,0])
print(ans)
