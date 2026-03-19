def sum_of_n(n):
    if n < 0:
        return "!!!!Fuckkkkkk offfff!!!!"
    res = 0;
    for i in range(1, n+1):
        res = res + i;
    return res;

num = int(input("Enter a number: \n"));
result = sum_of_n(num);
print(f"Sum of this {num} is: ", result)