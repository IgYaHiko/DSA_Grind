class Solution:
    def sumOf2dList(self, nums: list[list[int]]) -> int:
        for i in range(len(nums)):
            total = 0
            for j in range(len(nums[i])):
                total += nums[i][j]
            print(f"row{i}: {nums[i]} -> {total}")
            print()
        for i in range(len(nums[0])):
            total = 0
            for j in range(len(nums)):
                total += nums[j][i]
            print(f"col{i}: -> {total}")
            print(nums[0])

sol = Solution()
ans = sol.sumOf2dList([[10,20,40],[40,50,60]])
print(ans)