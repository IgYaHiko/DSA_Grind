from math import gcd
largest = 0
second = 0
res = []
strength = 0
nums = [7,5]
for i in range(len(nums)):
    if nums[i] > largest:
        second = largest
        largest = nums[i]
    elif largest > nums[i] > second:
        second = nums[i]
    if second == 0:
       second = largest
sq = gcd(second, largest) **  2
print(sq)