class Soluton:
    def simplifyPath(self, path: str) -> str:
        stack = []
        s = path.split("/")
        res = "/"
        for i in range(len(s)):
            if  s[i] == "" or s[i] == ".":
                continue
            if stack and s[i] == "..":
               stack.pop()
               continue
            stack.append(s[i])
            if stack and stack[-1] == "..":
               stack.pop()
        return res + "/".join(stack)
sol = Soluton()
ans = sol.simplifyPath("/home/")


print(ans)
