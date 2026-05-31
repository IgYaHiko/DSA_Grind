def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def removeDuplicates():
    my_list = get_element()
    arr = sorted(my_list)
    i = 0
    j = 1
   
    while j < len(arr):
        if arr[i] != arr[j]:
           arr[i+1] = arr[j]
           i += 1
           
        j += 1
    return arr[:i+1]

print(removeDuplicates())

    
    