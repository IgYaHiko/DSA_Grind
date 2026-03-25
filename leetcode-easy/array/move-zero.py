# 283. Move Zeroes
# Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

# Note that you must do this in-place without making a copy of the array.

 

# Example 1:

# Input: nums = [0,1,0,3,12]
# Output: [1,3,12,0,0]
# Example 2:

# Input: nums = [0]
# Output: [0]
def moveZero(n):
    i = 0
    
    for j in range(len(n)):
        if n[j] == 0:
            j+=1
            continue
        if n[j] != 0:
           t = n[i]
           n[i] = n[j]
           n[j] = t
           i +=1
           j +=1
    return n
print(moveZero([0,1,0,3,12]))

