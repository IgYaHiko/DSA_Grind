def count_occur(sen, char):
   result = sen.count(char);
   return result;


stri = input("Enter Your String: ");
chars = input("Enter Your Char: ")
res = count_occur(stri, chars);
print(f"Occurence of this char in this sentence is: {res}")