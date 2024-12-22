# 1. string quotation

'''
    a. single quote string : vitore double quote use kora jay
    b. double quote string : vitore single quote use kora jay
    c. single triple single quote string : etay jebave likhbo shetai thakbe. line break use kora jay.
    d. double triple double quote string : etatew jebave likhbo shetai thakbe. line break use kora jay.

'''

text = 'my name is "jihad" and I am a "developer"'
print(text)

text1 = '''
    my name is "jihad" and I am a "developer".
    Now I am learning python.
    '''
print(text1)

text2 = """
    my name is 'jihad' and I am a 'developer'.
    Now I am learning python.
    """
print(text2)


# 2. string slicing
text3 = "Hello, World!"
print(text[0:5]) # Hello
print(text[::2]) # Hlo ol! 2 ta character por por print korbe

# string repetition
text4 = "jihad "
print(text4*5)


'''
some methods:
    - upper() : sob gula character ke uppercase kore dibe
    - lower() : sob gula character ke lowercase kore dibe
    - title() : protita word er first character ke uppercase korbe
    - capitalize() : full sentence er first character ke uppercase korbe
    - swapcase() : uppercase ke lowercase and lowercase ke uppercase
'''


# 3. string replace
text5 = "Hello, World!"
print(text5.replace("World", "Jihad"))

# 4. string to list (split)
text6 = "my-name-is-jihad"
print(text6.split("-")) # ['my', 'name', 'is', 'jihad']

# 5. removing whitespace
'''
    - lstrip() : left side theke whitespace remove korbe
    - rstrip() : right side theke whitespace remove korbe
    - strip() : both side e whitespace remove korbe
'''
text7 = "    my name is jihad    "
print(text7.strip()) # my name is jihad

# 6. duplicate word counitng
text8 = "my name is jihad 