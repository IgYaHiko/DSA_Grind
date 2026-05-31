def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def rev():
    li = get_element()
    ori = li
    revs = []
    for i in li[::-1]:
        revs.append(i)
    if ori == revs:
        print("True P")
    else: 
        print("False P")

rev()      
