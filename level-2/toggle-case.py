from io import StringIO

def test():
    sb = StringIO()

    sb.write("Hello")
    sb.write(" World")

    result = sb.getvalue()
    print(result)   # Hello World

 

def toggle_case(sen):
    emp = ""
    for ch in sen:
        if 'a' <= ch <= 'z':
            as_val = ord(ch)
            upper_val = as_val - 32
            upper_char = chr(upper_val)
            emp += upper_char
            
        elif 'A' <= ch <= 'Z':
            low_as_val = ord(ch)
            lower_val = low_as_val + 32
            lower_char = chr(lower_val)
            emp += lower_char
        else: 
            return emp
    print(f"toggled value: {emp}")
    return emp

def main():
    your_str = input("Enter Your String: ")
    toggle_case(your_str)


main()