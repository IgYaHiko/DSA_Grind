def isFactorial(n):
    if n == 0 or n == 1:
       return 1;
    else:
       return n * isFactorial(n-1);

fac = int(input("Enter a number to get the factorial\n"));
result = isFactorial(fac);
print(f'Factorial of {fac} is:', result);