def threeSumClosest(nums, target):
    nums.sort()
    max_diff = float('inf')
    res = 0
    for i in range(len(nums)-2):
        left = i + 1
        right = len(nums) - 1
        
        while left < right:
            curr_sum = nums[i] + nums[left] + nums[right]
            diff = abs(curr_sum - target)
            if diff < max_diff:
                max_diff = diff
                res = curr_sum
            if curr_sum == target:
                return res
            elif curr_sum < target:
                left += 1
            else:
                right -= 1
    return res

print(threeSumClosest([-1,2,1,-4],1))