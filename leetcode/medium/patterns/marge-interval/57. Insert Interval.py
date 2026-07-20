class Solution:
    def insetInterval(self, interval: list[list[int]], newInterval: list[int]) -> list[list[int]]:
        interval.append(newInterval)
        interval.sort(key=lambda y:y[0])
        res = []
        start1 = interval[0][0]
        end1 = interval[0][1]
        for i in range(1, len(interval)):
            start2 = interval[i][0]
            end2 = interval[i][1]
            # marge happen if true case
            if end1 >= start2:
               start1 = start1
               end1 = max(end1, end2)
               continue
            # if marge not happen
            res.append([start1, end1])
            start1 = start2
            end1 = end2
        # add the remaining last pair
        res.append([start1, end1])
        return res
    
sol = Solution()
ans = sol.insetInterval(interval=[[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval=[4,8])
print(ans)