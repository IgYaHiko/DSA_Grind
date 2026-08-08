n = [5,7,7,8,8,8,10]
i = 0
j = len(n) -1
res = [-1,-1]
while i<=j:
    mid = (i+j)//2
    print(f"{mid}: {n[mid]}")
    break