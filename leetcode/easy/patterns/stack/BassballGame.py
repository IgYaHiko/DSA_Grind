from stack import Stack
class Solution: 
    def bassBallGame(self, operations: list[str]) -> int:
        stack = Stack()
        for i in range(len(operations)):
            # if there is not element in the stack then push the ftist element 
            if stack and operations[i] == "C":
               stack.pop()
            elif stack and operations[i] == "D":
                top = stack[-1]
                mul = int(top) * 2
                stack.push(mul)
            elif stack and operations[i] == "+":
                top = stack.peek()
                stack.pop()
                sn = stack.peek()
                sums = int(top) + int(sn)
                stack.push(top)
                stack.push(sums)
            else:
                stack.push(int(operations[i]))
        res = 0
        for i in stack.items:
            res += i
sol = Solution()
ans = sol.bassBallGame(["5","2","C","D","+"])
print(ans)
