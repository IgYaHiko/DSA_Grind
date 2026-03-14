def rev_str():
    input_str = input("Enter Your String You Want To Reverse:")
    emp_str = " "
    for i in range(len(input_str) -1, -1, -1):
        emp_str += input_str[i];
        
    print(f"Your Reversed String: {emp_str}");
    return emp_str;

rev_str();

