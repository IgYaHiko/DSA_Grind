from stack import Stack
class Solution:
     def preGreaterEle(self, arr:list[int]) -> list[int]:
        stack = Stack()
        stack.push(arr[0])
        res = []
        res.append(-1)
        for i in range(1,len(arr)):
            while stack and stack.peek() <= arr[i]:
                stack.pop()
            if stack.is_empty():
               res.append(-1)
            else:
               res.append(stack.peek())
            stack.push(arr[i])
        return res
     
sol = Solution()
ans = sol.preGreaterEle([10, 4, 2, 20, 40, 12, 30])
print(ans)
        
