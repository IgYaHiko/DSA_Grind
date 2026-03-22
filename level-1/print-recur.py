def p(n):
    if n== 0:
        return 1
    
    p(n-1)
    print(n)
    
p(5)