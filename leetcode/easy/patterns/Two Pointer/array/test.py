word =["word","good","best","word"] 
s = "";
i = 0
freq = {}
for i in range(len(word)):
    s += word[i];
while (i < len(s)):
    freq[s[i]] = freq.get(s[i], 0) + 1;
    i+=1
print(freq)