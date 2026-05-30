def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def largest_ele():
    my_list = get_element()

    largest = my_list[0]
    for i in my_list:
        if i > largest:
            largest = i
    return largest

def with_max():
    my_list = get_element()
    print(f"largest element of this list is (using max func): {max(my_list)}")



print(f"Largest element of this list without using max func: {largest_ele()}")
with_max()