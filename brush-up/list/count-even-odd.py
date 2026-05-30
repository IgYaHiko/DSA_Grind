def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def evenOdd():
    my_list = get_element()
    for i in my_list:
        if i % 2 == 0:
            print(f"{i} is even")
        else:
            print(f"{i} is odd")

evenOdd()