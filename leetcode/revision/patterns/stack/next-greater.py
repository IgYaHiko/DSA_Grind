class Solution:
    def nextgreater(self, nums: list[int]) -> list[int]:
        stack = []
        res = []
        for i in range(2*len(nums)-1,-1,-1):
            while stack and stack[-1] <= nums[i%len(nums)]:
                 stack.pop()
            if not stack:
               res.append(-1)
            else:
               res.append(stack[-1])
            stack.append(nums[i%len(nums)])
            rev = res[::-1]
        return rev[:len(nums)]
    
sol = Solution()
ans = sol.nextgreater([1,2,1])
print(ans)