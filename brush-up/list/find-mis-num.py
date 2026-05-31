def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def findMissingValue():
    my_list = get_element()
    N = len(my_list) + 1
    act = 0
    for i in my_list:
        act += i
    expected_sum = N * (N+1) // 2
    if expected_sum !=  act:
        missing = expected_sum - act
    return missing

print(f"missing value is: {findMissingValue()}")