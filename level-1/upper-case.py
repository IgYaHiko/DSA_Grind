

def upper_case():
    sen = input("Enter Your String: ")
    emp = ""
    for ch in sen:
       if ch.islower():
        as_val = ord(ch)
        upper_val = as_val - 32
        upper_char = chr(upper_val)   
        emp += upper_char
       else:
          emp += ch
    print(f"Original String: {sen}")
    print(f'Upper case is : {emp}')
    return emp

upper_case()