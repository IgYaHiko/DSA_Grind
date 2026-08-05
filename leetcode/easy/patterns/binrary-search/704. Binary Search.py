class Solution:
    def binary_search(self, nums: list[int], target: int) -> int:
        i = 0
        j = len(nums) - 1
        while i <= j:
            mid = i + (j-i) // 2
            if target == nums[mid]:
               return mid
            if target < nums[mid]:
                j = mid - 1
                if target == nums[mid]:
                   return mid
            else:
                i = mid + 1
                if target == nums[mid]:
                    return mid
        return -1
    
sol = Solution()
ans = sol.binary_search(nums = [-1,0,3,5,9,12], target = 9)
print(ans)