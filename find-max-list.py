# using max built-in
def get_input():
    n = int(input("How many elements you want to keep in the list: \n"));
    
    # empty list ;
    emp_list = [];

    # append the elements;
    for i in range(n):
        num = int(input(f"Enter Your Number {i+1}: "))
        emp_list.append(num);
    return emp_list;

def max_list():
    my_list = get_input();
    
    print(f"The list is: {my_list}");
    print(f"largest element of this list is: {max(my_list)}");
    return my_list;

max_list();