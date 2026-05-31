def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def getOccurence(target):
    count = 0
    my_list = get_element()
    for i in my_list:
        if i == target:
           count += 1
        if count == 0:
            return 'not exists'
    return count
       


           
print(f"target element occur: {getOccurence(5)}")