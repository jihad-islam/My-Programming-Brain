def greet():
    print("Hello World!")
    print("I am learning Python")
    print("Python is fun to learn")

greet()


'''
argument is the actual piece of data and parameter is the name of that data

'''
def greet(name, city): # parameter
    print(f"Hello World. I am {name}. I live in {city}.")
    print(f"Now {name} is learning Python")
    print(f"Python is popular in {city} city.")

greet("Jihad", "Dhaka") # argument

# positional argument vs keyword argument

'''
ekhane a = 4, b = 4, c = 6. ami 4,5,6 er position change korle a,b,c er assignment ow change hobe. etai positional argument.
'''
def sum(a,b,c):
    print(a+b+c)

sum(4,5,6)

'''
ekhn ami position fixed kore disi. eta keyword argument
'''
def sum(a,b,c):
    print(a+b+c)

sum(b = 4, c = 5, a = 6) # keyword argument

# practice: ekta can 5 square meters paint korte parle, total area te koyta can lagbe?
import math

def calculate(height, width):
    area = height * width
    no_of_cans = math.ceil(area / 5)
    print(no_of_cans)

height = int(input())
width = int(input())
calculate(height, width)

# check a number is it a prime or not

def prime_number(number):
    is_prime = True
    for i in range (2, number):
        if number % i == 0:
            is_prime = False
    
    if is_prime:
        print("Prime Number")
    else:
        print("Not a Prime Number")

n = int(input())
prime_number(n)


# project: Caesar Cipher. encoder and decoder.

alphabet =['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
text = input("Type your message:\n").lower()
shift = int(input("Type the shift number:\n"))

def encrypt(plain_text,shift_amount):
    cipher_text = ""
    for letter in plain_text:
        position = alphabet.index(letter) # list e kono kichur position khuje ber kore index() function
        cipher_text += alphabet[position + shift_amount]
    print(f"the encoded text is {cipher_text}")

def decrypt(cipher_text,shift_amount):
    plain_text = ""
    for letter in cipher_text:
        position = alphabet.index(letter)
        plain_text += alphabet[position - shift_amount]
    print(f"the encoded text is {plain_text}")

if direction == "encode":
    encrypt(plain_text=text, shift_amount=shift) #keyword_argument
elif direction == "decode":
    decrypt(cipher_text=text, shift_amount=shift)

# method 2
alphabet =['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

def ceasar(start_text, shift_amount, cipher_direction):
    end_text = ""
    if cipher_direction == "decode":
        shift_amount *= -1
    for char in start_text:
        if char in alphabet:
            position = alphabet.index(char)
            end_text += alphabet[position + shift_amount]
        else:
            end_text += char
    print(f"Here's the {cipher_direction}d result: {end_text}")


should_end = False
while not should_end:
    direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
    text = input("Type your message:\n").lower()

    shift = int(input("Type the shift number:\n"))
    shift = shift % 25
    
    ceasar(start_text=text, shift_amount=shift, cipher_direction=direction)

    restart = input("Type 'yes' if you want to go again. Otherwise type 'no'.\n")
    if restart == "no":
        should_end = True
        print("Goodbye")