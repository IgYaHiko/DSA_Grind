freq = {}
s = "leetcode"
for i in range(len(s)):
    freq[s[i]] = freq.get(s[i],0) + 1

print(freq)
if s[0] in freq:
    print("yes")
else:
    print("no")