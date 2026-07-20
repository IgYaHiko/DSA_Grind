class Solution:
    def mergeInterval(self, nums: list[list[int]]) -> list[list[int]]:
        res = []
        nums.sort(key=lambda x:x[0])
        start1 = nums[0][0]
        end1 = nums[0][1]
        for i in range(1,len(nums)):
            start2 = nums[i][0]
            end2 = nums[i][1]
            # merge if needed
            if end1 >= start2:
               start1 = start1
               end1 = max(end1, end2)
               continue
            res.append([start1,end1])
            #if not merge 
            start1 = start2
            end1 = end2
        res.append([start1,end1])
        return res
sol = Solution()
ans = sol.mergeInterval(nums=[[6, 8], [1, 9], [2, 4], [4, 7]])
print(ans)
