def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def secondLargest_with_sort():
    my_list = get_element()
    if len(my_list) < 2:
        return "There is no 2nd element"

    sort = sorted(my_list)
    return sort[-2]
   
def secondlargest():
    my_list = get_element()
    largest = float('-inf')
    second_lagest = float('-inf')

    for curr in my_list:
        if curr > largest:
           second_lagest = largest
           largest = curr
        elif second_lagest < curr < largest:
             second_lagest = curr

    return second_lagest
print(f"second largest element of the list: {secondLargest_with_sort()}")
print(f"without sorting: {secondlargest()}")