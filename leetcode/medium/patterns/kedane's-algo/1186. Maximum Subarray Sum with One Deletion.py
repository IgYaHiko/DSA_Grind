class Solution:
    def maxsumonedelete(self, nums: list[int]) -> int:
        no_delete = nums[0]
        one_delete = float('-inf')
        res = nums[0]
        for i in range(1, len(nums),1):
            pre_no_delete = no_delete
            prev_one_delete = one_delete
            no_delete = max(no_delete + nums[i], nums[i])
            if prev_one_delete == float('-inf'):
                v1 = nums[i]
            else:
                v1 = prev_one_delete + nums[i]
            one_delete = max(v1, pre_no_delete)
            res = max(res, max(one_delete, no_delete))
        return res

sol = Solution()
print(sol.maxsumonedelete([1,-2,0,3]))