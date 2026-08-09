#given formula (p * (100 - d)) / 100
class Solution: 
    def mindis(self, prices: list[int], discounts: list[int]) -> float:
        prices.sort(reverse=True)
        discounts.sort(reverse=True)
        res = 0
        for p in range(len(prices)):
            if p < len(discounts):
               dis = prices[p] * (100 - discounts[p]) / 100
               
            else:
                dis = prices[p]
            res += dis
        return res
sol = Solution()
ans = sol.mindis(prices=[10,30,21],discounts=[50,60])
print(ans)