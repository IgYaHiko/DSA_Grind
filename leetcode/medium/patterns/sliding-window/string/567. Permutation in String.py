def checkInclusion(s1: str, s2: str) -> str:
    low = 0
    high = 0
    freq_s1 = {}
    freq_s2 = {}
    i = 0
    while i < len(s1):
        freq_s1[s1[i]] = freq_s1.get(s1[i], 0) + 1
        i += 1
    while high < len(s2):
        freq_s2[s2[high]] = freq_s2.get(s2[high], 0) + 1
        window = high - low + 1
        if window == len(s1):
            if freq_s1 == freq_s2:
                return True
            freq_s2[s2[low]] -= 1
            if freq_s2[s2[low]] == 0:
                del freq_s2[s2[low]]
            low += 1
        high += 1
    return False

print(checkInclusion(s1="ab",s2="eidbaooo"))
           