class Solution:
    def longestPalindrome(self, s: str) -> int:
        freq = {}
        res = 0
        odd = False
        for i in range(len(s)):
            freq[s[i]] = freq.get(s[i], 0) + 1
        for ch in freq:
            if freq[ch] % 2 == 0:
               res += freq[ch]
            else:
               res += freq[ch] - 1
               odd = True
        if odd:
           res += 1
        return res
    
sol = Solution()
ans = sol.longestPalindrome("abccccdd")
print(ans)
               
