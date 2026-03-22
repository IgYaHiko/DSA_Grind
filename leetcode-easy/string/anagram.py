def isAnagram(s,t):
        if len(s) != len(t):
            print("Lenth mismatch")
            return
        
        if sorted(s) == sorted(t):
            print("Valid Anagram")
        else:
            print("Not Anagram")    

isAnagram(
     s="anagram",
     t="nagaram"
)