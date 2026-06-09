def backspaceCompare(s: str, t: str) -> bool:
    i = len(s) -1
    j = len(t) -1
    skipS = 0
    skipT = 0
    while i >= 0 or j >= 0:
        # check the S text book until a valid char
        while i >= 0:
            if s[i] == '#':
                skipS += 1
                i -= 1
            elif skipS > 0:
                skipS -= 1
                i -= 1
            else:
                break
        
        # check the T text book until a valid char found
        while j >= 0:
            if t[j] == '#':
               skipT += 1
               j -= 1
            elif skipT > 0:
               skipT -= 1
               j -= 1
            else:
                break
        if i >= 0 and j >= 0:
           if s[i] != t[j]:
             return False
        elif i >=0 or j >= 0:
            return False
        i -= 1
        j -= 1
    return True

s = input("Enter the s string: ")
t = input("Enter the t string: ")
print(backspaceCompare(s=s,  t=t))

                