def first_word(sen):
    emp = "";
    word = sen.split();
    if(word):
        emp += word[0];
        print(f"First word: {emp}");
        return emp
    else:
        return ""

stri = input("Enter Your String: ");
first_word(stri)
        
    