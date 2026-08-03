s = "abccccdd"
freq = {}
res = 0
for i in range(len(s)):
    freq[s[i]] = freq.get(s[i],0) + 1
    #if len(s) % 2 == 0:
    print(freq[s[i]])
print(res)
       
          
          