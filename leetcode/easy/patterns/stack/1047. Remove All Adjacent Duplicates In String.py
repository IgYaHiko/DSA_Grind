from stack import Stack
class Solution:
        def removeDuplicates(self, s: str) -> str:
            stack = Stack()
            stack.push(s[0])
            for i in range(1, len(s)):
                if stack and stack.peek() == s[i]:
                    stack.pop()
                else:
                   stack.push(s[i])

            return "".join(stack.items)
        
sol = Solution()
ans = sol.removeDuplicates(s="abbaca")
print(ans)
        
                