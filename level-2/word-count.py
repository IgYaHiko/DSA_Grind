def word_count(sen):
    new_l = sen.split();
    c = 0;
    for i in new_l:
        c+=1
    print(f"Original Strign: {sen}")
    print(f"word count: {c}")
    return c

you_str = input("Enter Your String: ")
word_count(sen=you_str)