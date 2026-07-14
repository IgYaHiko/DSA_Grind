class Solution:
    def minimumSubarray(self, nums: list[int]) -> int:
        best = nums[0]
        ans = nums[0]
        for i in range(1, len(nums), 1):
            v1 = best + nums[i]
            v2 = nums[i]
            best = min(v1, v2)
            ans = min(best,ans)
        return ans
sol = Solution()
ans = sol.minimumSubarray([-2,1,-3,4,-1,2,1,-5,4])
print(ans)