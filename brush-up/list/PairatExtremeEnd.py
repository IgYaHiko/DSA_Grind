def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums
def PairatExtremeEnds(target):
    li = get_element()
    arr = sorted(li)
    i = 0
    j = len(arr) - 1
    targetSum = arr[i] + arr[j]
    if targetSum == target:
       return arr[i], arr[j]
    else:
        return "no extreme pairs"
    
target = int(input("Enter the target value: "))
print(f"extreme pairs: {PairatExtremeEnds(target=target)}")