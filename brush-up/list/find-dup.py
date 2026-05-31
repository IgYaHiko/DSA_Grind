def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def findDuplicates():
    my_list = get_element()
    freq = {}
    for num in my_list:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num in freq:
        if freq[num] > 1:
            print(f"{num} appear {freq[num]} times")

findDuplicates()