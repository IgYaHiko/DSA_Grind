def get_input():
    n = int(input("How many elements you want to keep in the list: \n"));
    
    # empty list ;
    emp_list = [];

    # append the elements;
    for i in range(n):
        num = int(input(f"Enter Your Number {i+1}: "))
        emp_list.append(num);
    return emp_list;

def without_max():
    my_list = get_input();
    
    largest = my_list[0];
    for i in my_list:
        if i > largest:
           largest = i;
    print(f"the list is: {my_list}");
    print(f"largest element is: {largest}");
    return largest;

without_max();


# Time complexity is O(n);