def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = input(f"{i+1}th element: ")
        nums.append(num)
    return nums

def reverseString():
    my_str = get_element()
    i = 0
    j = len(my_str) -1

    while i < j:
        temp = my_str[j]
        my_str[j] = my_str[i]
        my_str[i] = temp
        i += 1
        j -= 1
    return my_str

print(reverseString())