res = [] 
nums = [1,2,3,4,5]
for i in range(len(nums)):
    if nums[i] % 2 == 1:
       nums[i] = 0
    res.append(nums[i])
print(tuple(res))
print(res)
