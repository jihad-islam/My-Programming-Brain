'''
ekhane amra random module ke import korechi. module jinish ta ki? module onekta function er moto. etar backend e onekgula code likha ase. ami just oita import kore nilam.

'''

import random

a = random.randint(1,10) # 1 and 10 soho 1 theke 10 er moddhe random int number print korbe. including 1 and 10
print(a)

b = random.random() # 0 theke 1 er moddhe doshomik value or floating value print korbe. but 1 included thakbe na.
print(b)

# ekhn ami jodi 5 er moddhe random floating value print korte chai. kivabe korbo?
c = random.random() * 5 # eta 0.000 theke 4.99999 er modhe value print korbe
print(c)

# head or tail
import random
toss = random.randint(0,1)

if toss == 0:
    print("Heads")
else:
    print("Tails")


# list 
cities = ["Dhaka", "Rajshahi", "Khulna", "Dinajpur", "Barishal"]
print(cities)
print(cities[0])
print(cities[-1])

cities.append("Savar") # append er maddhome list er last item e value add kora jay
print(cities)

cities.extend(["Rangpur", "Gaibandha"]) #ekadhik item add korte extend use kora hoy
print(cities)

# insert,remove,pop,etc erokom aro kichu function ase list e.


# name er list theke random ekjon er nam pick korbe.
import random
names=["Jihad", "Sadman", "Tamim", "Sakib","Musfiq"]
size = len(names) # eta list er size show korbe

choice= random.randint(0,size-1) # amake ekta digit return dib
person = names[choice]
print(person)


# nested list
names=["Jihad", "Sadman", "Tamim", "Sakib","Musfiq"]
cities = ["Dhaka", "Rajshahi", "Khulna", "Dinajpur", "Barishal"]

together = [names, cities] # eta nested list. together list er moddhe names and cities er 2 ta list ase.
print(together)


# rock,paper, scissors
import random

user = int(input("What do you choose? Type 0 for Rock, 1 for Paper and 2 for Scissor. \n"))

computer = random.randint(0,2)
print(f"Computer chose {computer}")

if user >=3 and user < 0:
    print("Your choose wrong number. You Lose.")
elif user == computer:
    print("Draw")
elif user == 0 and computer == 2:
    print("You win!")
elif computer == 2 and user == 0:
    print("You Lose.")
elif user > computer:
    print("You win!")
elif computer > user:
    print("You Lose")