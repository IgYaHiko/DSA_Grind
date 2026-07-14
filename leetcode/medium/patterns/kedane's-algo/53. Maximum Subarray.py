class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        i = 0
        best_end = nums[0]
        answer = nums[0]
        while i < len(nums):
            v1 = best_end + nums[i]
            v2 = nums[i]
            i += 1
            best_end = max(v1, v2)
            answer = max(best_end, answer)
        return answer
sol = Solution()
ans = sol.maxSubArray(nums=[-2,1,-3,4,-1,2,1,-5,4])
print(ans)