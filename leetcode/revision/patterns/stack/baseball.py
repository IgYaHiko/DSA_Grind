# An integer x.
#Record a new score of x.
# '+'.
# Record a new score that is the sum of the previous two scores.
# 'D'.
# Record a new score that is the double of the previous score.
# 'C'.
# Invalidate the previous score, removing it from the record.
class Solution:
    def baseball(self, opt: list[str]) -> int:
        stack = []
        for i in range(len(opt)):
            if stack and opt[i] == "C":
               stack.pop()
            elif stack and opt[i] == "D":
               t = stack[-1]
               m = 2 * int(t)
               stack.append(m)
            elif stack and opt[i] == "+":
               t = stack[-1]
               stack.pop()
               s = stack[-1]
               sm = int(t) + int(s)
               stack.append(t)
               stack.append(sm)
            else:
                stack.append(int(opt[i]))
        res = 0
        for i in range(len(stack)):
            res += int(stack[i])
        return res
    
sol = Solution()
ans = sol.baseball(["5","2","C","D","+"])
print(ans)
               


