def lengthOfLongestSubstring(s:str) -> int:
    low = 0
    high = 0
    dic = {}
    res = float('-inf')
    while high < len(s):
        dic[s[high]] = dic.get(s[high], 0) + 1

        while len(dic) < high - low + 1:
            dic[s[low]] -= 1
            if dic[s[low]] == 0:
               del dic[s[low]]
            low += 1
        res = max(res, high - low + 1)
        high += 1
    if res == float('-inf'):
       return 0
    else:
       return res


print(lengthOfLongestSubstring(s="abcd"))
