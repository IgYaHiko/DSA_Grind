class Solution:
    def subarraysDivByK(self, nums: list[int], k:int) -> int:
        freq = {}
        total = 0
        res = 0
        freq[0] = 1
        for i in range(len(nums)):
            total += nums[i]
            rem = total % k
            if rem < 0:
               rem += k
            res += freq.get(rem, 0)
            freq[rem] = freq.get(rem,0) + 1
        return res
    

sol = Solution()
ans = sol.subarraysDivByK(nums=[4,5,0,-2,-3,1], k=5)
print(ans)