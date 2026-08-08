class Solution:
    def peakMountain(self, nums: list[int]) -> int:
        i = 0
        j = len(nums) -1
        f = 0
        while i <= j:
            mid = (i+j)//2
            if nums[mid] < nums[mid+1]:
               i = mid + 1
            else:
                f = mid 
                j = mid -1 
        return f 
    
sol = Solution()
ans = sol.peakMountain(nums=[0,2,1,0])
print(ans)