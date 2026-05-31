def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def rev_array():
    my_list = get_element()
    new = []
    for i in my_list[::-1]:
        new.append(i)
    return new
def builtifrev():
    li = get_element()
    new = []
    for i in reversed(li):
        new.append(i)
    return new


print(f"new reverse list: {rev_array()}")
print(f"without builtin: {builtifrev()}")
