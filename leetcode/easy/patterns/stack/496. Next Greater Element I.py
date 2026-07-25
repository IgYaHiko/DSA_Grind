from stack import Stack
class Solution:
    def nextGreaterElement(self, nums1: list[int], nums2: list[int]):
        stack = Stack()
        res = []
        next_great = {}
        for i in range(len(nums2)-1, -1,-1):
            while (not stack.is_empty()) and stack.peek() <= nums2[i]:
                stack.pop()
            if stack.is_empty():
               next_great[nums2[i]] = -1
            else:
               next_great[nums2[i]] = stack.peek()
            stack.push(nums2[i])
        for j in range(len(nums1)):
            res.append(next_great[nums1[j]])
        return res
    
sol = Solution()
ans = sol.nextGreaterElement([4,1,2],[1,3,4,2])
print(ans)