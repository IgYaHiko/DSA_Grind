def count_vol(s): 
    
    emp_str = "";
    
    for i in range(len(s)):
        char = s[i];
        if(char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u'):
            emp_str += char;
    print(f"Your Original List: {s}");
    print(f"Your vow list: {emp_str}");
    return emp_str;

your_string = input("Enter Your String: ");
count_vol(your_string)