class Solution:
    def findPeak(self, nums: list[int]) -> int:
        i = 0
        j = len(nums) -1
        while i < j:
            mid = (i + j) // 2
            if nums[mid] < nums[mid+1]:
               i = mid + 1
            else:
               j = mid
        return j
    
sol = Solution()
ans = sol.findPeak(nums = [1,2,3,1])
print(ans)


