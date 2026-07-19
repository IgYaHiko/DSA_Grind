# test case  nums = [1,1,1], k = 2
class Solution:
     def subarraySum(self, nums: list[int], k: int) -> int:
        freq = {}
        res = 0
        total = 0
        freq[0] = 1
        for i in range(len(nums)):
              total += nums[i]
              qs = total - k
              f = freq.get(qs, 0)
              print("f",f)
              if f % k == 0:
                 res += 1
              freq[total] = freq.get(total,0) + 1
        return res
sol = Solution()
ans = sol.subarraySum(nums=[1,1,1], k=2)
print(ans)
            