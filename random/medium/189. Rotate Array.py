class Solution:
    def reverseList(self, nums: list[int], i: int, j:int) -> list[int]:
        while i < j:
            nums[i], nums[j] = nums[j],nums[i]
            i += 1
            j -= 1
        return nums 
    def rotateArray(self, nums: list[int], k: int) -> list[int]:
        k %= len(nums)
        # reverse the array first 
        self.reverseList(nums=nums, i=0, j=len(nums)-1)
        self.reverseList(nums=nums, i=0, j=k-1)
        self.reverseList(nums=nums, i=k, j=len(nums)-1)
        return nums
sol = Solution()
ans = sol.rotateArray(nums=[1,2,3,4,5,6,7], k=3)
print(ans)