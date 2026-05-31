def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def findMissingValue():
    my_list = get_element()
    arr = sorted(my_list)
    N = len(arr)
    act = 0
    for i in arr:
        act += i
    expected_sum = N * (N+1) // 2
   
    return expected_sum - act

print(f"missing value is: {findMissingValue()}")