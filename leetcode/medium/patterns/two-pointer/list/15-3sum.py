def threeSum(nums):
    nums.sort()
    res = []
    i = 0
    for i in range(len(nums) -2):
        # skip duplicate for i 
        if i > 0 and nums[i] == nums[i-1]:
            i += 1
            continue

        left = i + 1
        right = len(nums) -1
        target = -nums[i]
        # two sum for nums fixed nums[i]th value
        while left < right:
            sum = nums[left] + nums[right]
            if sum == target:
               res.append([nums[i], nums[left], nums[right]])
               left += 1
               right -= 1

               while left < right and nums[left] == nums[left-1]:
                   left += 1
               while left < right and nums[right] == nums[right + 1]:
                   right -= 1
                
            elif sum > target:
                right -=1
            else:
                left += 1
    return res

            

                
print(threeSum([-1,0,1,2,-1,-4]))