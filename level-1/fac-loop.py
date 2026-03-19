def fac_loop(n):
    if n < 0 and n == 0:
        return "Enter a positive number";
   
    if n == 1:
       return 1;
    
    res = 1;
    for i in range(1, n+1):
        res = res * i
    return res;

fac = int(input("Enter a number: \n"));
result = fac_loop(fac)
print(f"Factorial of {fac} is: ", result)