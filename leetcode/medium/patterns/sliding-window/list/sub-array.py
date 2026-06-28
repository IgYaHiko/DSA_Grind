def maxSubarray(arr,k):
    low = 0
    high = k
    sum = 0
    res = float('-inf')
    for i in range(low,high,1):
        sum += arr[i]
    res = sum
    while high < len(arr):
        sum -= arr[low]
        sum += arr[high]
        low += 1
        high += 1
        res = max(sum, res)
    return res
print(maxSubarray([100,200,300,400], k=2))
