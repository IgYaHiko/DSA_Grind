def longestKSubstr(s,k):
    res = -1
    low = 0
    high = 0
    dic = {}
    while high < len(s):
        dic[s[high]] = dic.get(s[high], 0) + 1
        while len(dic) > k:
            dic[s[low]] -= 1
            if dic[s[low]] == 0:
               del dic[s[low]]
            low += 1
        if len(dic) == k:
            wind_len = high - low + 1
            res = max(res,wind_len)
        high += 1
    return res


print(longestKSubstr("aabacbebebe", 3))
         