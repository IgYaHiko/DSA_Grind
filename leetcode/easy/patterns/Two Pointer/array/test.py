class Solution:
    def simplifyPath(self, path: str) -> str:
        stack = []
        res = "/"
        s = path.split("/")
        
        for i in range(len(s)):

            if s[i] == "" or s[i] == ".":
               continue
            if stack and s[i] == "..":
              
               stack.pop()
            else:
                continue
            
            stack.append(s[i])
               
        print(s)
        print(stack)
        return res + "/".join(stack)
sol = Solution()
ans = sol.simplifyPath("home")
print(ans)