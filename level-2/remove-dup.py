def remove_dup(sen):
    seen = {}
    emp = ""
    for x in sen:
        if x not in seen:
           seen[x] = True
           emp += x
    print(emp)

remove_dup("Hooooo")