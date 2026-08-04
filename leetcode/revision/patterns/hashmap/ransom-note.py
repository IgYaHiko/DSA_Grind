class Solution:
    def ransomeNote(self, ransom: str, magazine: str) -> bool:
        f1 = {}
        f2 = {}
        for i in range(len(ransom)):
            f1[ransom[i]] = f1.get(ransom[i], 0) + 1
        for j in range((len(magazine))):
            f2[magazine[j]] = f2.get(magazine[j],0) + 1
        for ch in f1:
            if ch not in f2 or f2[ch] < f1[ch]:
               return False
        return True
sol = Solution()
ans = sol.ransomeNote(ransom="aa", magazine="aab")
print(ans)