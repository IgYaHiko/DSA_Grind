class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        i = 0
        j = len(nums) -1
        while i <= j:
            mid = i + (j-1)//2
            if target == nums[mid]:
               return mid
            if target <= nums[mid]:
               j = mid -1
            else:
               i = mid + 1
        return i 
               
sol = Solution()
ans = sol.searchInsert(nums=[1,3,5,6], target=7)
print(ans)