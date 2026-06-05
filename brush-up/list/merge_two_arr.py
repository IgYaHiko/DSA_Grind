def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def mergeTwoSortedArray():
    li1 = get_element()
    li2 = get_element()
    arr1 = sorted(li1)
    arr2 = sorted(li2)
    i = 0
    j = 0
    resArr = []
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            resArr.append(arr1[i])
            i += 1
        else:
            resArr.append(arr2[j])
            j += 1
    while i < len(arr1):
        resArr.append(arr1[i])
        i += 1
    while j < len(arr2):
        resArr.append(arr2[j])
        j += 1
    return resArr

print(f"merged array: {mergeTwoSortedArray()}") 

