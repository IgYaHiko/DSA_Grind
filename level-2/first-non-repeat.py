def fir_non_rep(sen):
    freq = {}
    for ch in sen:
        val = freq.get(ch, 0) + 1
        freq[ch] = val
    
    for ch in sen:
        if freq[ch] == 1:
            return ch
    
    return None

print(fir_non_rep("Leetcode"))