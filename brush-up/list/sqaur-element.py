def get_element():
    n = int(input("Enter how many element you want in a list: "))
    nums = []
    for i in range(n):
        num = int(input(f"{i+1}th element: "))
        nums.append(num)
    return nums

def squarOfArray():
    li = get_element()
    new = []
    for i in li:
        sq = i ** 2
        new.append(sq)
    return sorted(new)

print(f"sq list: {squarOfArray()}")