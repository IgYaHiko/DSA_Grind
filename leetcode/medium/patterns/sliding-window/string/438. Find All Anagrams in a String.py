def findAnagrams(s: str, p: str) -> list[int]:
    low = 0
    high = 0
    freq_s = {}
    freq_p = {}
    i = 0 
    res = []
    while i < len(p):
        freq_p[p[i]] = freq_p.get(p[i], 0) + 1
        i += 1
    while high < len(s):
        freq_s[s[high]] = freq_s.get(s[high], 0) + 1
        window = high - low + 1
        if window == len(p):
            if freq_p == freq_s:
                res.append(low)
            freq_s[s[low]] -= 1
            if freq_s[s[low]] == 0:
                del freq_s[s[low]]
            low += 1
        high += 1
    return res

print(findAnagrams(s = "abab", p = "ab"))
        
        
