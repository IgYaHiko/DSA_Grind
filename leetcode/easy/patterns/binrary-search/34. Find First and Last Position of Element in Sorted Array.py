class Solution:
    def searchRange(self, nums: list[int], target:int) -> int:
        i = 0
        j = len(nums) - 1
        f = -1 
        e = -1
        while i <= j:
            mid = (i+j)//2
            if target < nums[mid]:
               j = mid - 1
            elif target > nums[mid]:
                i = mid + 1
            else:
                f = mid
                j = mid - 1
        i = 0
        j = len(nums) - 1
        while i <= j:
            mid = (i + j) //2 
            if target < nums[mid]:
               j = mid - 1
            elif target > nums[mid]:
                i = mid + 1
            else:
                e = mid 
                i = mid + 1
        return [f,e]

sol = Solution()
ans = sol.searchRange(nums = [5,7,7,8,8,10], target = 8)
print(ans)