def largest_three(a, b, c):
    if (a >= b) and (a >= c):
        print(f'{a}: A is greater than all')
        return a
    elif (b >= a) and (b >= c):
        print(f'{b}: B is greater than all')
        return b
    else:
        print(f"{c}: C is greatere than all")    
        return c

# take input    
a=int(input('Enter the first number\n'))
b=int(input("Enter the second number\n"))
c=int(input("Enter the second number\n"))

result = largest_three(a, b, c)
print("Greatest of all is", result)