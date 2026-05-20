def Palindrome(n):
    ori = n
    rev = 0
    while n > 0:
        rev = rev * 10 + ( n % 10)
        n = n // 10
    return ori == rev

def main():
    if(Palindrome(121)):
        print(f"True")
    else:
        print(f"False")

main()