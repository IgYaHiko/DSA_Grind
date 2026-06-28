def minSubArrayLen(target, nums) -> int:
    res = float('inf')
    low = 0
    high = 0
    total = 0
    while high < len(nums):
        total += nums[high]
        while total >= target:
            window_len = high - low + 1
            res = min(res, window_len)
            total -= nums[low]
            low += 1
        high += 1
    if res == float('inf'):
        return 0
    else: 
        return res
            

print(minSubArrayLen(7,[2,3,1,2,4,3]))