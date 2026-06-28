def totalFruit(nums: list[int]) -> int:
    dic = {}
    res = float('-inf')
    low = 0
    high = 0
    while high < len(nums):
        dic[nums[high]] = dic.get(nums[high], 0) + 1
        while len(dic) > 2:
            dic[nums[low]] -= 1
            if dic[nums[low]] == 0:
                del dic[nums[low]]
            low += 1
        if len(dic) >= 2 or len(dic) < 2:
            window_lengh = high - low + 1
            res = max(res, window_lengh)
        high += 1
    return res

print(totalFruit(nums=[1,2,1,2,3,4,4,5,5,6,22,2,342,24,2424,24242424,10]));

