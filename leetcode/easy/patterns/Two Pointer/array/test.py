largest = 0
second = 0

nums = [7,5]
for i in range(len(nums)):
    if nums[i] > largest:
        second = largest
        largest = nums[i]
        
    elif largest > nums[i] > second:
        second = nums[i]
        if second == 0:
           second = largest
    
print([largest, second])