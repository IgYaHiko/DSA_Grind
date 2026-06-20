def four_sum(nums: list[int],target: int):
    nums.sort()
    res = []
    for i in range(len(nums)-3):
        if i > 0 and nums[i] == nums[i-1]:
            continue
        for j in range(i+1, len(nums)-2, 1):
            if j > i +1 and nums[j] == nums[j-1]:
                continue
            left = j + 1
            right = len(nums) -1
            while left < right:
                sum = nums[i] + nums[j] + nums[left] + nums[right]
                if sum == target:
                    res.append([nums[i], nums[j], nums[left], nums[right]])
                    left += 1
                    right -= 1
                    while left < right and nums[left] == nums[left-1]:
                        left += 1
                    while left < right and nums[right] == nums[right+1]:
                        right -= 1
                elif sum < target:
                    left += 1
                else: 
                    right -= 1
    return res

print(f"1st test case of 4sum: {four_sum(nums=[1,0,-1,0,-2,2],target=0)}")
print(f"2st test case of 4sum: {four_sum(nums=[2,2,2,2,2],target=8)}")