def findErrorNums(nums):
       
        dic =  {}
        dup = 0
        mis = 0
        for i in nums:
            dic[i] = dic.get(i, 0) + 1

        for i in dic:
            if dic[i] > 1:
               dup = i
        for i in range(1,len(nums)+1):
            if i not in dic:
               mis = i
               break
        return [dup,mis]

print(findErrorNums([1,2,2,4]))