def sumOfSqDigit(n:int) -> int:
    sq = 0
    while n > 0:
        digit = n % 10
        sq += digit * digit
        n //= 10
    return sq

def isHappy(n: int) -> bool:
    slow = n
    fast = n
    while True:
        slow = sumOfSqDigit(slow)
        fast = sumOfSqDigit(sumOfSqDigit(fast))
        if fast == slow == 1:
            return True
        if fast == slow != 1:
            return False


n = int(input("Enete your number to check it's happy or not ?: "))
if isHappy(n):
   print(f"{n}: That's a happy number")
else:
    print(f"{n}: Fuck that's not")