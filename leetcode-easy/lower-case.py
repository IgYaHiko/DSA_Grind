""" Question Description: Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 

Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"
Example 3:

Input: s = "LOVELY"
Output: "lovely" """

def lower_case(s: str) -> str:

    emp = " "
    for ch in s:
        if 'A' <= ch <= 'Z':
           lower_ass = ord(ch)
           lower_val = lower_ass + 32
           lower_char = chr(lower_val)
           emp += lower_char
        else: 
            emp += ch
        
    print(f"Output: {emp}")
    return emp

def main():
    st = input("Enter Your String: ")
    lower_case(s=st)

main()