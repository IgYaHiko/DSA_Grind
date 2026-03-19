def get_user():
    n = int(input("Enter how many elements you want to keep inside the list: \n"));
    
    empty_list = []

    for i in range(n):
        num = int(input(f"Enter Your Elements {i+1}: "));
        empty_list.append(num);

    return empty_list;


def filter_even():
    my_list = get_user();
    
    even_list = [];
    odd_list = [];
    for num in my_list:
        if(num % 2 == 0):
           even_list.append(num)
        else:
           odd_list.append(num);
    
    print(f"Original list: {my_list}");
    print(f"Even list: {even_list}"); 
    print(f"Odd list: {odd_list}");
    
    return even_list, odd_list;
     
          

filter_even();
        
# Time complexity: O(n);
