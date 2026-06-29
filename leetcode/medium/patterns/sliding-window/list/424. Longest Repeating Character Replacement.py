def characterReplacement(s: str, k: int) -> int:
    low = 0
    high = 0
    freq = {}
    max_count = float('-inf')
    res = float('-inf')
    while high < len(s):
        freq[s[high]] = freq.get(s[high], 0) + 1
        max_count = max(max_count, freq[s[high]])
        while (high - low + 1) - max_count > k:
            freq[s[low]] -= 1
            if freq[s[low]] == 0:
               del freq[s[low]]
            low += 1
        res = max(res, high - low + 1)
        high += 1
    return res
print(characterReplacement("AABABBA",1))
