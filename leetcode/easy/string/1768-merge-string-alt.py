def mergeAlternately(word1: str, word2: str) -> str:
    i = 0
    j = 0
    new_str = ""
    while i < len(word1) and j < len(word2):
          new_str += word1[i]
          i += 1
          new_str += word2[j]
          j += 1
        
    while i < len(word1):
        new_str += word1[i]
        i +=1 
    while j < len(word2):
        new_str += word2[j]
        j +=1 
    return new_str
word1 = input("Enter first word: ")
word2 = input("Enter second word: ")
print(f"new merge string: {mergeAlternately(word1=word1, word2=word2)}")
         
