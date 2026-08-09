class Solution:
    def findMin(self, nums: list[int]) -> int:
        ans = float("inf")
        res = 0
        i = 0
        j = len(nums) - 1
        if nums[0] < nums[-1]:
            return nums[0]
        while i <=j:
            mid = (i+j)//2
            if nums[mid] > nums[j]:
               i = mid + 1
            else:
               res = nums[mid]
               ans = min(ans,res)
               j = mid - 1
        return ans
sol = Solution()
ans = sol.findMin([5,6,7,7,2,3,4,5,61,0])
print(ans)