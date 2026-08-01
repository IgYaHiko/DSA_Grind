class Solution:
    def dailyTemp(self, temp: list[int]) -> list[int]:
        stack = []
        res = []
        stack.append(len(temp) -1)
        for i in range(len(temp)-1, -1,-1):
            while stack and temp[stack[-1]] <= temp[i]:
                stack.pop()
            if not stack:
               res.append(0)
            else:
               diff = stack[-1] - i
               res.append(diff)
            stack.append(i)
        return res[::-1]
    
sol = Solution()
ans = sol.dailyTemp([73,74,75,71,69,72,76,73])
print(ans)