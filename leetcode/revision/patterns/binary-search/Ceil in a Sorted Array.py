class Solution:
    def findCeli(self, nums: list[int], x:int) -> int:
        i = 0
        j = len(nums) - 1
        res = float("inf")
        while i <= j:
            mid = i + (j-i)//2
            if x <= nums[mid]:
               res = min(res, mid)
               j = mid - 1
            else:
               i = mid + 1
        if res == float("inf"):
           return -1 
        else:
           return res
sol = Solution()
ans = sol.findCeli([1, 2, 8, 10, 11, 12, 19], 5)
print(ans)