def get_input():
    n = int(input("How many number you want to keep in the list: \n"));

    # create a empty list:
    numbers = [];
    
    # Iterate and get the number inside the list
    for i in range(n):
        num = int(input(f"Enter your number {i+1}: "));
        numbers.append(num);

    return numbers;

def sum_list():
    my_list = get_input();
    
    total = 0;
    for i in my_list:
        total += i;

    print(f"The list {my_list}");
    print(f"sum of list {total}")

    return total;

sum_list()