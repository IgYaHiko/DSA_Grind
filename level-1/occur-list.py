def getInput():
    n = int(input("How many element you want to create: "))
    nums = []
    for i in range(n):
        num = int(input(f"Enter the {i+1} element: "))
        nums.append(num)
    return nums

def occurence_list(n):
    my_list = getInput()
    c = 0
    for i in my_list:
        if i == n:
           c += 1
    return c

num = int(input("Enter the number check the occurence in the list: "))
print(f"number:{num} exists in the list: {occurence_list(num)} times")