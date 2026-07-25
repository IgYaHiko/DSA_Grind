from stack import Stack
class Solution:
    def dailyTemperatures(self, temp: list[int]) -> list[int]:
        stack = Stack()
        res = []
        stack.push(len(temp)-1)
        for i in range(len(temp)-1, -1, -1):
            while (not stack.is_empty()) and temp[stack.peek()] <= temp[i]:
                stack.pop()
            if stack.is_empty():
               res.append(0)
            else:
               diff = stack.peek() - i
               res.append(diff)
            stack.push(i)
        return res[::-1]
    
sol = Solution()
ans = sol.dailyTemperatures(temp=[73,74,75,71,69,72,76,73])
print(ans)