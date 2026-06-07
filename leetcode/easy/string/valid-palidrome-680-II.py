def is_palidrome(s, i, j):
    while i < j:
        if s[i] != s[j]:
           return False
        i += 1
        j -= 1
    return True

def validPalidrome(s):
    i = 0
    j = len(s) - 1
    while i < j:
        if s[i] != s[j]:
            return (
                is_palidrome(s, i+1, j) or
                is_palidrome(s, i, j -1)
            ) 
        i += 1
        j -= 1
    return True

intput_Str = input("Enter the String: ")
print(validPalidrome(s=intput_Str))