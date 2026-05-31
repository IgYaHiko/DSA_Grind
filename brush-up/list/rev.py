def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def reverseList():
    my_list = get_element()
    i = 0
    j = len(my_list) - 1
    while i < j:
        my_list[i], my_list[j] = my_list[j], my_list[i]
        i += 1
        j -= 1
    return my_list
print(reverseList())