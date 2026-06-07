def isVowl(ch: chr) -> bool:
        st = "aeiouAEIOU"
        return (st.find(ch) != -1)
def reverseVowels(s: str) -> str:
        i = 0
        j = len(s) - 1
        new_str = list(s)
        while i < j:
            if isVowl(new_str[i]) and isVowl(new_str[j]):
                temp = new_str[j]
                new_str[j] = new_str[i]
                new_str[i] = temp
                i += 1
                j -= 1
            elif not isVowl(new_str[i]):
                i += 1
            elif not isVowl(new_str[j]):
                j -= 1
        return "".join(new_str)
                  
            

s = input('enter the string: ')
print(reverseVowels(s=s))