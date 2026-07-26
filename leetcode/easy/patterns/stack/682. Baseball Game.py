from stack import Stack
class Solution:
    def baseball(self, operations: list[int]) -> int:
        stack = Stack()
        res = 0
        for i in range(len(operations)):
            if (not stack.is_empty()) and operations[i] == "C":
               stack.pop()
            elif (not stack.is_empty()) and operations[i] == "D":
               t = stack.peek()
               stack.push(int(t)*2)
            elif (not stack.is_empty()) and operations[i] == "+":
                f = stack.peek()
                stack.pop()
                sn = stack.peek()
                s = int(f) + int(sn)
                stack.push(f)
                stack.push(s)
            else:
                stack.push(int(operations[i]))
        print(stack)
        for i in stack.items:
            res += i
        return res
sol = Solution()
ans = sol.baseball(["5","2","C","D","+"])
print(ans)