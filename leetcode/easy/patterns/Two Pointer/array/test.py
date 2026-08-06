class Solution:
    def evenOdd(self, n:int):
        for i in range(1,n+1):
            if i % 2 == 0:
               print(f"even element: {i}")
            else:
               print(f"odd element: {i}")
sol = Solution()
ans = sol.evenOdd(10)
print(ans)