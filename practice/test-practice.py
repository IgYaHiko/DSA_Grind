def getInput():
    n = int(input("Enter how many number you want to generate: "))
    nums = []
    for i in range(n):
        num = int(input(f"Enter {i+1} number: "))
        nums.append(num)
    return nums

def moveZeros():
    n = getInput()
    i = 0
    
    for j in range(len(n)):
        if n[j] != 0:
            n[i],n[j] = n[j], n[i]
            i +=1
    return n
    
    


            


print(moveZeros())
        


