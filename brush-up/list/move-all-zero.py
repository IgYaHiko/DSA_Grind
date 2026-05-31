def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def moveAllZero():
    my_list = get_element()
    i = 0
    j = 1 
    for j in range(len(my_list)):
        if my_list[j] != 0:
           my_list[j],my_list[i] = my_list[i], my_list[j]
           i += 1
        j +=1 
    return my_list

print(moveAllZero())