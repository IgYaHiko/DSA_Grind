class Solution:
    def sumof2Dlist(self, num: list[list[int]]):

       
        for i in range(len(num)):
            total = 0
            for j in range(len(num[i])):
                total += num[i][j]
            print(f"Row {i}: {num[i]} -> {total}")

        print()

        
        for i in range(len(num[0])):
            total = 0
            for j in range(len(num)):
                total += num[j][i]
            print(f"Column {i}:  {total}")


sol = Solution()
sol.sumof2Dlist([[1,2,3],[4,5,6],[7,8,9]])