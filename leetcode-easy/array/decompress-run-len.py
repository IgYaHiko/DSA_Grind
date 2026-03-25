
def decompressRLElist(nums):
    res = []
    freq = 0
    val = 0
    for i in range(0, len(nums), 2):
        freq = nums[i]
        val  = nums[i+1]
        res.extend([val] * freq)
    return res
print(decompressRLElist([1,1,2,3]))
        

        