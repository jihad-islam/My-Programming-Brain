names=["Jihad", "Sadman", "Tamim", "Sakib","Musfiq"]

'''
1. ekahne x holo ekta variable. names theke protita element variable e assign kortese then oi variable ta print kore ditesi.

2. ekhane ekta proble holo amar list er size obdhi loop cholbe. but ami jodi  list er protom 3 ta element print korte chai tokhon 'range' ana labe.
'''
for x in names: 
    print(x)

# range for loop
for x in range(1, 10): # 1 theke 9 porjonto
    print(x)

# 1 theke 100 porjonto sum

result= 0
for x in range(1,101):
    result +=x
print(result)

#odd numbers between 1 to 10
for x in range(1,11,2):
    print(x)

# sum of the even numbers
num = int(input())
sum = 0
for x in range(1,num+1):
    if(x%2==0):
        sum += x
print(sum)

#FizzBuzz game
for x in range (1, 101):
    if x % 3 == 0 and x % 5 == 0:
        print("FizzBuzz")
    elif x % 3 == 0:
        print("Fizz")
    elif x % 5 == 0:
        print("Buzz")
    else:
        print(x)


# project: password generator
import random
letters =['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
numbers = ['0','1','2','3','4','5','6','7','8','9']
symbols = ['!','#','$','%','&','(',')','*','+']

print("Welcome to the Password Generator!")
num_letters= int(input("How many letters would you like in your password?\n"))
num_symbols = int(input("How mane symbols would you like?\n"))
num_numbers = int(input("How mane numbers would you like?\n"))

password_list =[]

for char in range(1, num_letters +1):
    password_list.append(random.choice(letters))
for char in range(1, num_symbols +1):
    password_list.append(random.choice(symbols))
for char in range(1, num_numbers +1):
    password_list.append(random.choice(numbers))

random.shuffle(password_list)

password = ""
for x in password_list:
    password += x

print(password)