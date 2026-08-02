from math import gcd
class Solution:
    def maxPairStrength(self, nums: list[int]) -> int:
        res = float("-inf")
        for i in range(len(nums)):
            for j in range(1, len(nums)):
                if i == j:
                    continue
                mul = nums[i] * nums[j]
                g = gcd(nums[i], nums[j])
                sq = g ** 2
                res = max(res, mul/sq)
        return int(res)
sol = Solution()
ans = sol.maxPairStrength(nums=[2,3,5])
print(ans)