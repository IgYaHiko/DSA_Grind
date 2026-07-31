class Solution:
    def previousGreater(self, arr:list[int]) -> list[int]:
        stack = []
        res = []
        stack.append(arr[0])
        res.append(-1)
        for i in range(1,len(arr)):
            while stack and stack[-1] <= arr[i]:
                stack.pop()
            if not stack:
               res.append(-1)
            else:
               res.append(stack[-1])
            stack.append(arr[i])
        return res
    
sol = Solution()
ans = sol.previousGreater([10, 4, 2, 20, 40, 12, 30])
print(ans)