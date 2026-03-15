def pal_string(s):
    emp_str = ""
    for i in range(len(s) -1, -1, -1):
        emp_str += s[i];
    if(s == emp_str):
        print(f"This String is Palindrome: {s}");
    else:
        print(f"This is String is not a Palindrome: {s}")

    return s, emp_str



str = input("Enter Your String: ");
pal_string(str);