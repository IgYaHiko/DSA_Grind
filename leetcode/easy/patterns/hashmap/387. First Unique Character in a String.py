class Solution:
    def firstUnique(self, s: str) -> int:
        freq = {}
        for i in range(len(s)):
            freq[s[i]] = freq.get(s[i],0) + 1
        for j in range(len(s)):
            if freq[s[j]] == 1:
               return j
               
        return -1
    
sol = Solution()
ans = sol.firstUnique(s="leetcode")
print(ans)
