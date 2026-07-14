class Solution:
    def maximumProductSubarray(self, nums: list[int]) -> int:
        best_max = nums[0]
        best_min = nums[0]
        ans = nums[0]
        i = 1
        while i < len(nums):
            v1 = best_max * nums[i]
            v2 = best_min * nums[i]
            v3 = nums[i]
            i +=1 
            best_max = max(v1,v2,v3)
            best_min = max(v1, v2, v3)
            ans = max(best_max, best_min, ans)
        return ans
    

sol = Solution()
ans = sol.maximumProductSubarray([2,3,-2,4])
print(ans)