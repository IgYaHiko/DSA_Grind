def isValid(freq_s, freq_t):
    for ch in freq_t:
        if freq_s.get(ch,0) < freq_t[ch]:
            return False
    return True

def minWindow(s: str, t: str) -> str:
    low = 0
    high = 0
    freq_s = {}
    freq_t = {}
    res = ""
    i = 0
    while i < len(t):
        freq_t[t[i]] = freq_t.get(t[i], 0) + 1
        i += 1
    while high < len(s):
        freq_s[s[high]] = freq_s.get(s[high], 0) + 1

        while isValid(freq_s=freq_s, freq_t=freq_t):
            curr = s[low:high+1]
            if  res == "" or len(curr) < len(res):
                res = curr
            freq_s[s[low]] -= 1
            if freq_s[s[low]] == 0:
                del freq_s[s[low]]
            low += 1
        high += 1
    return res

print(minWindow(s="ADOBECODEBANC", t="ABC"))
