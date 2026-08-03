class Solution:
    def maxNumberOfBalloons(self, text:str) -> int:
        freq = {}
        res = []
        b = {
            "b":1,
            "a":1,
            "l": 2,
            "o": 2,
            "n": 1
        }
        for i in range(len(text)):
            freq[text[i]] = freq.get(text[i],0) + 1
        for ch in b:
            if ch not in freq:
               return 0
            else:
               div = freq[ch]/b[ch]
               res.append(int(div))
        return min(res)
sol = Solution()
ans = sol.maxNumberOfBalloons(text="baloon")
print(ans)