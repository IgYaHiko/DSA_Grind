def findUnsortedSubarray(nums:list[int]) -> int:
    # if all the elements are small means if the list is sorted itself then return 0
    if all(nums[i] <= nums[i+1] for i in range(len(nums) -1)):
        return 0
    min_sort = float('inf')
    max_sort = float('-inf')
    left = 0
    right = len(nums) -1
    # traval left to right 
    for i in range(len(nums) -1):
        # find the min boundary
        if nums[i] > nums[i+1]:
           # update each time in the min_sort when n[i] > n[i + 1]
           min_sort = min(min_sort, nums[i+1])
    # traval right to left 
    for i in range(len(nums)-1,0, -1):
         # find the max boundary
        if nums[i] < nums[i-1]:
            # update each time in the max_sort when n[i] < n[i - 1]
           max_sort = max(max_sort, nums[i-1])
        
    while left < len(nums) and nums[left] <= min_sort:
        left += 1
    while right >= 0 and nums[right] >= max_sort:
        right -= 1
    return (right - left) + 1

        
print(findUnsortedSubarray([2,6,4,8,10,9,15]))