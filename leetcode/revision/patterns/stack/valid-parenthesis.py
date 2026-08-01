class Solution:
    def validparenthesis(self, s:str) -> bool:
        stack = []
        res = []
        for i in range(len(s)):
            if  s[i] in "({[":
               stack.append(s[i])
            if s[i] in "]})":
                if not stack:
                   return False
                if s[i] == ")" and stack[-1] == "(":
                   stack.pop()
                elif s[i] == "}" and stack[-1] == "{":
                   stack.pop()
                elif s[i] == "]" and stack[-1] == "[":
                    stack.pop()
                else:
                    return False
        if stack:
           return False
        else:
           return True
        
sol = Solution()
ans = sol.validparenthesis(s="({[]})")
print(ans)
                
            