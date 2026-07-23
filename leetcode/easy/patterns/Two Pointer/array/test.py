s = "([{}])"
print(s)
res = []
for i in range(len(s)):
    if s[i] == "(" or s[i] == "{" or s[i] == "[":
       res.append(s[i])
       if res[-1] != ")" or res[-1] != "}" or res[-1] != "]":
          print("False")
print(res)  