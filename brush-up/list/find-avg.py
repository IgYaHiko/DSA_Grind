def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def find_avg():
    my_list = get_element()
    sum = 0
    for i in my_list:
        sum += i
        avg = sum / len(my_list)
    return avg
print(f"avg of this list: {find_avg()}")