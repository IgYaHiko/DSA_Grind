class Solution:
    def countTriplets(self, sum, arr):
        arr.sort()
        c = 0
        for i in range(0,len(arr)-2,1):
            left = i + 1
            right = len(arr) - 1
            while left < right:
                _sum = arr[i] + arr[left] + arr[right]
                if _sum < sum:
                    c += (right - left)
                    left += 1
                else:
                    right -= 1
                   
                    
        return c
    
# time complexsity = O(n^2)
# space complexity = O(1)