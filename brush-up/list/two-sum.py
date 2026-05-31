def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def twoSums(target):
    my_list = get_element()
    arr = sorted(my_list)
    i = 0
    j = len(arr) - 1
    while i < j:
        sum = arr[i] + arr[j]
        if sum == target:
            return [i, j]
        elif sum > target:
            j -= 1
        else: 
            i += 1

print(twoSums(6))