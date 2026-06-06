def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def mergeArrayInplace(m,n):
    li1 = get_element()
    li2 = get_element()
    i = m - 1
    j = n - 1
    k = m + n - 1
    while i >= 0 and j >= 0:
        if li1[i] > li2[j]:
           li1[k] = li1[i]
           i -= 1
        else:
            li1[k] = li2[j]
            j -= 1
        k -= 1
    while j >= 0:
        li1[k] = li2[j]
        j -= 1
        k -= 1
    return li1
print(f"{mergeArrayInplace(3,3)}")

