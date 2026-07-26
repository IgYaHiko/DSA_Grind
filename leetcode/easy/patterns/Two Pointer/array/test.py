stack = []
n = ["5","4","C","D","+"]
res = 0
for i in range(len(n)):
    if not stack: 
       stack.append(int(n[i]))
       continue
    if  n[i] == "C":
        if stack:
          stack.pop()
    elif n[i] == "D":
        t = stack[-1]
        mul = int(t) * 2
        stack.append(mul)
    elif n[i] == "+":
        top = stack[-1]
        stack.pop()
        t = stack[-1]
        s = int(t) + int(top)
        print(top,t)
        print("sum of both", s)
        stack.append(top)
        stack.append(s)
       
        
    else:
        stack.append(n[i])
print(stack)
for i in range(len(stack)):
    
    res += stack[i]
print(res)