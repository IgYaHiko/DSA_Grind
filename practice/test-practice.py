def getInput():
    n = int(input("How many number you want to keep in the list: \n"));
    nums = []

    for i in range(n):
        num = int(input(f"Enter {i+1} element: "))
        nums.append(num)
    print(f"Old List: {nums}")
    return nums

def count_num(n):
    list = getInput();
    c = 0
    for i in list:
        if i == n:
           c += 1
    return  c

num = int(input("Enter a given number: "))
print(f"given number {num} in the list {count_num(num)}")

   


   
    
