class Solution:
    def intervalListIntersection(self, firstList: list[list[int]], secondList: list[list[int]]) -> list[list[int]]:
        i = 0
        j = 0
        res = []
        while i < len(firstList) and j < len(secondList):
            start1 = firstList[i][0]
            end1 = firstList[i][1]
            start2 = secondList[j][0]
            end2 = secondList[j][1]
            if end1 >= start2:
                start = max(start1, start2)
                end = min(end1, end2)
                if start <= end:
                  res.append([start, end])
            if end1 >= end2:
               j += 1
            if end2 >= end1:
               i += 1
        return res
    
sol = Solution()
ans = sol.intervalListIntersection(firstList=[[1,10]], secondList=[[2,3],[4,5],[6,7]])
print(ans)
                
