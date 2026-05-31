def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums


def getOccurence(target):
    count = 0
    my_list = get_element()
    for i in my_list:
        if i == target:
           count += 1
    return count
       
def usingDict(target):
    my_list = get_element()
    freq = {}
    for i in my_list:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1
    if target in freq:
        return freq[target]
    return 'no'

           
print(f"target element occur: {getOccurence(5)}")
print(f"target element occur: {usingDict(5)}")