def remove_space(sen):
    new_Str = ""
    for i in range(len(sen)):
        if(sen[i] == " "):
           continue
        else:
           new_Str += sen[i]
    print(f"Original String: {sen}")
    print(f"New String: {new_Str}")
    return new_Str


your_str = input("Enter Your String: ");
remove_space(
    sen=your_str
)