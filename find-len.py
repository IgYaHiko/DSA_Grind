def find_len():
    sen = input("Enter Your String: ")

    count = 0;
    for i in sen:
        count += 1
    print(f"Len of the string: {count}")
    return count


find_len()