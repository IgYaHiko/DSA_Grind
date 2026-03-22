def largest(n):
    
    even = 0
    for i in n:
        if i % 2 == 0:
           even += 1
    return even


        

print(largest([1,2,35,6,8]))
