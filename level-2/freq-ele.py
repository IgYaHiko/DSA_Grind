def freq_ele(n):
    freq = {}
    for i in n:
        val = freq.get(i, 0) + 1
        freq[i] = val
    print(freq)




def freq_(n):
    freq = {}
    for i in n:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1
    print(freq)


freq_([1,2,2])