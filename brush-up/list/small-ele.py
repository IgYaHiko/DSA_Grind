def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def small_ele():
    my_list = get_element()
    smallest = my_list[0]
    for i in my_list:
        if i < smallest:
            smallest = i
    return smallest

def with_min():
    my_list = get_element()
    print(f"smallest element of this list with min func: {min(my_list)}")


print(f"without min fun smallest element of list: {small_ele()}")
with_min()