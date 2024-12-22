#string slicing
s = input()

print(s[2]) # 3rd character
print(s[-2]) # 2nd last character
print(s[:5]) # prothom 5 ta character
print(s[:-2]) # last er 2 character baad
print(s[::2]) # only even index er character
print(s[1::2]) # odd index character
print(s[::-1]) # reverse order
print(s[::-2])
print(len(s)) # length

#count(), word count
s="this is a stentence"

print(s.count("is")) # is 2 bar ase. th'is'
print(s.count(" ")+1) # etar maddhome ami actually space count korlam. then 1 jog kore word count hoye gelo.


# split() function
name = "Jihad Islam".split() # space diye string ta ke vag kore list e convert korse
print(name)

name = "JihadIslam".split() # jehetu space nai tai purota ekta list e jabe
print(name)

name = "Jihad,Islam".split(",") # ekhn comma diye split korlo
print(name)

# swap two word
s = input()

word1, word2 = s.split()

print(word2, word1)

# replace() function
s = input()

print(s.replace('1', 'one'))
