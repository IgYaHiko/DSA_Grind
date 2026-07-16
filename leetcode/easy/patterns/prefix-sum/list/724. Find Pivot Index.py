class Solution: 
    def totalSum(self, nums: list[int]) -> int:
        total = 0
        for i in range(len(nums)):
            total += nums[i]
        return total
    def pivotIndex(self, nums: list[int]) -> int:
        left = 0
        total = self.totalSum(nums=nums)
        if total - nums[0] == 0:
            return 0
        for i in range(1, len(nums)):
            left += nums[i-1]
            right = total - nums[i] - left
            if left == right:
               return i
        return - 1
    
sol = Solution()
ans = sol.pivotIndex([1,7,3,6,5,6])
print(ans)