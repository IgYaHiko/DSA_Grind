def freq_word(sen):
    freq = {}
    for ch in sen:
        value = freq.get(ch, 0) + 1
        freq[ch] = value
    print(freq)




def freq_long(sen):
    freq = {}
    for ch in sen:
        if ch in freq:
           freq[ch] += 1;
        else:
            freq[ch] = 1;
    print(freq)



def main():
    freq_long("Hello")
    freq_word("Hello")

main()