def type_count(sen):
    new_str = ""
    sp = 0;
    d = 0;
    l = 0;
    for i in range(len(sen)):
        if not sen[i].isalnum():
           sp += 1;
        elif '0' <= sen[i] <= '9':
            d += 1;
        else:
            l += 1;
    print(f"special Char: {sp}");
    print(f"Digits: {d}");
    print(f"letters: {l}");
    return sp, d, l

your_str = input("Enter Your String: ")
type_count(
    sen=your_str
)
    