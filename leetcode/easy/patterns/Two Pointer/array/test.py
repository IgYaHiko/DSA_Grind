s = [3,5,7,10,30,40,50,60]
i = 0 
j = len(s) -1
while i <= j:
    mid = i + (j - i) //2 
    print(s[mid])
    break