import string
def validPalindrome(s: str) -> bool:
    lower_str = s.lower()
    translator = str.maketrans('', '', string.punctuation)
    clean_text = lower_str.translate(translator)
    cleanSpace = clean_text.replace(" ", "")
    i = 0
    j = len(cleanSpace) -1
    while i < j:
        if cleanSpace[i] != cleanSpace[j]:
           return False
        i += 1
        j -= 1
    return True
    

    
    
    

input_str = input("Enter your string: ")
print(validPalindrome(input_str))