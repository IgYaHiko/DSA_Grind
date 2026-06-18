def smallerNumbersThanCurrent(nums):
        i = 0
        c = 0
        res = []
        while i < len(nums):
            for j in range(0, len(nums), 1):
                if nums[j] < nums[i]:
                    c += 1
            ele = c 
            res.append(ele)
            c = 0
            i += 1
        return res

print(smallerNumbersThanCurrent([8,1,2,2,3]))
# Time complexity O(n^2)
# Space Complexity O(n)