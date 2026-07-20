intervals = [[1,3],[6,9]]
newInterval = [2,5]
intervals.append(newInterval)
intervals.sort(key=lambda y:y[0])
print(intervals)