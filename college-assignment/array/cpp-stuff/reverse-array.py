class Solution:
    def reverselist(n: list[int]) -> int:
        n = [1,2,4]
        i = 0
        j = len(n)- 1
        while i < j:
            n[i],n[j] = n[j],n[i]
            i += 1
            j -=1 
            return n
sol = Solution()
ans = sol.reverselist([1,2,3,4,5])
print(ans)