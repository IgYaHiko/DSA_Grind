# these are Arbitrary Arguments in func: this kinda arg has to types 
# 1. non Keyword arg: defines with * oparator
# 2. Keyword arg: define with dubble ** oparator

# non keyword
def my_tup(*tup):
    print(f"My tupple: {tup}")
    print(type(tup))

# example code of non keyword

def get_input():
    s = int(input("Enter How Many String You Want to Add: "))
    
    emp_tup = ();
    for i in range(s):
        num = input(f"Enter Your String {i+1}: ")
        emp_tup += (num,);
    return emp_tup;



def concat_string(*string):
    result = ""
    for i in string:
        result += i + " ";
    print(f"Concated String: {result}")
    return result.strip();


def main():
    my_string = get_input()
    concat_string(*my_string)


main();