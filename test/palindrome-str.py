def String_palindrome():
    s = input("Enter Your String: ")
    ori = s
    emp = ""
    for i in reversed(s):
        emp += i
    return ori == emp

def main():
    if (String_palindrome()):
        print("true")
    else:
        print("false")

main()