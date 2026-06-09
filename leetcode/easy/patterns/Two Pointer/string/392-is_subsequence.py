def isSubsequence(s: str, t: str) -> bool:
    i = 0
    j = 0
    while i < len(s) and j <len(t):
        if s[i] == t[j]:
            i += 1
            j += 1
        elif s[i] != t[j]:
            j +=1 
    return i == len(s)

s = input("Enter your substring: ")
t = input("Ente your string: ")
print(isSubsequence(s=s, t=t))