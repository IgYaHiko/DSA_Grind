class Solution:
    def return_hour(self, nums: list[int], sp: int) -> int:
        h = 0
        for i in range(len(nums)):
            h += nums[i] // sp
            if nums[i] % sp != 0:
               h += 1
        return h
    def kokoeating(self, nums: list[int], h:int) -> int:
        i = 1
        j = max(nums)
        res = -1
        while i <= j:
            mid = i + (j-i) // 2
            hour = self.return_hour(nums=nums, sp=mid)
            if hour > h:
               i = mid + 1
            else:
                res = mid
                j = mid - 1
        return res

sol = Solution()
ans = sol.kokoeating(nums=[30,11,23,4,20], h=5)
print(ans)