def even_odd(n):
    if n < 0:
        return "can't be negative fuckerr!!";
    

    if(n % 2 == 0):
        print(f"{n}: is even");
        return n
    else:
        print(f"{n}: is odd");
        return n



num = int(input("Enter a number: \n"));
result = even_odd(num);
