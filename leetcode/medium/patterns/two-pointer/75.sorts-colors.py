def sortColors(nums):
        """ 
        Do not return anything, modify nums in-place instead.
        """
        zero = []
        one = []
        two = []
      
        for i in range(len(nums)):
            if nums[i] == 0:
                zero.append(nums[i])
            elif nums[i] == 1:
                one.append(nums[i])
            else:
                two.append(nums[i])
        nums[:] = zero + one + two
        
# Time complexity = O(n)
# Space complexity = O(n)
