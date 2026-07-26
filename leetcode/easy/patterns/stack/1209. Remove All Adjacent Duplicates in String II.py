from stack import Stack

class Solution:
    def removeDuplicates(self, s: str, k: int) -> str:
        stack = Stack()

        for i in range(len(s)):
            if stack.is_empty() or stack.peek()[0] != s[i]:
                stack.push((s[i], 1))
            else:
                ch, count = stack.pop()
                count += 1

                if count < k:
                    stack.push((ch, count))

        res = ""

        while not stack.is_empty():
            ch, count = stack.pop()
            res = ch * count + res

        return res


sol = Solution()
ans = sol.removeDuplicates("deeedbbcccbdaa", 3)
print(ans)