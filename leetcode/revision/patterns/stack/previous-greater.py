class Solution:
    def previousGreater(self, nums: list[int]) -> list[int]:
        stack = []
        res = []
        stack.append(nums[0])
        res.append(-1)
        for i in range(1,len(nums)):
            while stack and stack[-1] <= nums[i]:
                  stack.pop()
            if not stack:
               res.append(-1)
            else:
               res.append(stack[-1])
            stack.append(nums[i])
        return res
    
sol = Solution()
ans = sol.previousGreater([10, 4, 2, 20, 40, 12, 30])
print(ans)