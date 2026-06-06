def detect_cap(sen):
    if sen.isupper():
        return True
    elif sen.capitalize():
        return True
    else: 
        return False

        
print(detect_cap("Cap"))


