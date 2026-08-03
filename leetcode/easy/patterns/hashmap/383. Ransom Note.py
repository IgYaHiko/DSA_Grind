class Solution:
    def ransomNote(self, ransom: str, magaize: str) -> bool:
        freq1 = {}
        freq2 = {}
        for i in range(len(ransom)):
            freq1[ransom[i]] = freq1.get(ransom[i],0) + 1
        for j in range(len(magaize)):
            freq2[magaize[i]] = freq2.get(magaize[i],0) + 1
        for ch in freq1:
            if ch not in freq2 or freq2[ch] <= freq1[ch]:
               return False
        return True
sol = Solution()
ans = sol.ransomNote(ransom="aa", magaize="aab")
print(ans)
                

