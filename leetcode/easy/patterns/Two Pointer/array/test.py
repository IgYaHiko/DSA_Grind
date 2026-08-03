ballon = {
            "b": 1,
            "a": 1,
            "l": 2,
            "o": 1,
            "n": 1

}
f = {
    "b": 2,
    "a": 2,
    "l": 6,
    "o": 2,
    "n": 10
}

ans = []
for ch in f:
    div = f[ch] / ballon[ch]
    ans.append(int(div))
print(min(ans))