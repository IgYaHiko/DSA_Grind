class Solution:
    def binarySearch(self, nums: list[int], target: int) -> int:
        i = 0
        j = len(nums) -1
        while i <= j:
            mid = i + (j-i) // 2
            if nums[mid] == target:
               return mid
            if target  < nums[mid]:
                j = mid - 1
                if target == nums[mid]:
                   return mid
            else:
                i = mid + 1
                if target == nums[mid]:
                   return mid
        return -1
    

sol = Solution() 
ans = sol.binarySearch([-1,2,3,6,9], 9)
print(ans)