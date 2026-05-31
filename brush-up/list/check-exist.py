def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def checkAnyElementsExists(target):
    my_list = get_element()
    if target in my_list:
        print(f"{target} is exist in the list")
    else :
        print(f"{target} is not exist in the list")

target = int(input("Enter your targer: "))
checkAnyElementsExists(target=target)