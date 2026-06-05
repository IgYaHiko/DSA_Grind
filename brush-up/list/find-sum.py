def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums
def findSumGivenSum(target): 
    li = get_element()
    arr = sorted(li)

    i = 0
    j = len(arr) - 1

    while i < j:
        targetSum = arr[i] + arr[j]
        if targetSum == target:
           return arr[i], arr[j]

        elif targetSum < target:
            i += 1
        else:
            j -= 1
    return "no return pair"
target = int(input("Enter the input: "))
print(f"pair of the target woudle be , {findSumGivenSum(target=target)}") 