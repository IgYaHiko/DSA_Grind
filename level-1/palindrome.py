def is_palindrome(n):
    original = n;
    reversed = 0

    while n > 0:
      reversed = reversed * 10 + (n % 10)
      n = n // 10
      
    return original == reversed
    

num = int(input("Enter a number\n"))

if is_palindrome(num):
   print(f'{num}: is a palindrome number...');
else:
   print(f'{num}: is not a palindrome number');