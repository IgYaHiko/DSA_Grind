def maximun():
    arr = [1,-2,0,3]
    i = 1
    best = arr[0]
    ans = arr[0]
    while i < len(arr):
        arr.pop(i)
        j = i
        while j < len(arr):
           v1 = best + arr[j]
           v2 = arr[j]
           j += 1
           best = max(v1, v2)
           ans = max(ans, best)
        return ans

print(maximun())

    