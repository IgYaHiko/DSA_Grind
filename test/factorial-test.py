def Factorial(n):
    if n == 0 or n == 1:
        return 1
    if n < 0:
        return -1
    fac = n *  Factorial(n-1)
    return fac



def FacLoop(n):
    fac = 1
    for i in range(1, n+1):
        fac *= i
    return fac

print(FacLoop(5))
print(Factorial(5))