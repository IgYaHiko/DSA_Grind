from stack import Stack
class Solution:
    def nextGreaterElements(self, nums: list[int]) -> list[int]:
        stack = Stack()
        res = []
        stack.push(nums[-1])
        for i in range(2*len(nums)-2, -1, -1):
            while (not stack.is_empty() )and stack.peek() <= nums[i%len(nums)]:
                stack.pop()
            if i < len(nums):
                if stack.is_empty():
                  res.append(-1)
                else:
                  res.append(stack.peek())
            stack.push(nums[i%len(nums)])
        return res[::-1]
sol = Solution()
ans = sol.nextGreaterElements([1,2,1])
print(ans)
