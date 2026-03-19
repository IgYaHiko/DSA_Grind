# Count how many times a specific character appears in a string.
# Example: "hello world", character 'l' → appears 3 times

def repeat_char(sen, char):
    c = 0;
    for i in range(len(sen)):
        charrr = sen[i]
        if charrr == char:
           c += 1;
    print(f"{char} this target char existing in this word for: {c}: times")
    return c;

senten = input("Enter Your String: ");
char = (input("Input a Char: "))
repeat_char(senten, char)