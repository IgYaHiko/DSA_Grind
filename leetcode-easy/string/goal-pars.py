# You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

# Given the string command, return the Goal Parser's interpretation of command.

 

# Example 1:

# Input: command = "G()(al)"
# Output: "Goal"
# Explanation: The Goal Parser interprets the command as follows:
# G -> G
# () -> o
# (al) -> al
# The final concatenated result is "Goal".


def interpret(sen):
    s = ""
    for i in range(len(sen)):
        if sen[i] == "G":
           s += "G"
        elif sen[i] == '(':
                if sen[i+1] == ')':
                   s += "o"
                else:
                   s += "al"
    return s

def main():
    s = input("Enter: ")
    print(f"Output: {interpret(s)}")

main()