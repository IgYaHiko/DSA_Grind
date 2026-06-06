def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def removeSpecificElement(target):
    li = get_element()
    i = 0
    k = 0
    while i < len(li):
        if target != li[i]:
           li[k] = li[i]
           k += 1
        i += 1
    return li[:k]


target = int(input("Enter the target: "))
print(f"{removeSpecificElement(target=target)}")
