from stack import Stack
class Solution:
    def isValid(self, s:str) -> bool:
        stack = Stack()
        for i in range(len(s)):
            # append if the element is opening bracket
            if s[i] in "({[":
               stack.push(s[i])
            if s[i] in ")}]":
                if not stack:
                  return False
                
                if s[i] == ")" and stack.peek() == "(":
                   stack.pop()
                elif s[i] == "}" and stack.peek() == "{":
                   stack.pop()
                elif s[i] == "]" and stack.peek() == "[":
                   stack.pop()
                else:
                    return False
        if stack:
           return False
        else:
           return True
sol = Solution()
ans = sol.isValid(s="[({})]")
print(ans)
        