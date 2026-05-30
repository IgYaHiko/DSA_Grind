def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def sum_list_with():
    my_li = get_element()
    return sum(my_li)

def sum_list():
    my_list = get_element()
    sum = 0
    for i in my_list:
        sum += i
    return sum
print(f"sum of list with sum fun: {sum_list_with()}")
print(f"sum of list without sum func: {sum_list()}")