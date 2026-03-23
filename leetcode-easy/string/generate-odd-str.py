def gen_Odd_str(n):
    if n % 2 == 1:
       return "a" * n
    else:
       return "a" * (n - 1) + "b"
    
print(gen_Odd_str(4))
