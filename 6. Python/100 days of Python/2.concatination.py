print("jihad"[0]) #just first character print korbe

print(123_456) # python e underscore( _ ) avoid kore

# ei code cholbe na. karon different datatype concatination kora jay na
name= len(input())
print("you have " + name + "characters") # ekhane ami string and int ke concatinatin korechi

#type function
name= len(input())
print(type(name))

name= "jihad"
print(type(name))

name= 123
print(type(name))


#type casting
name= len(input())
new_name = str(name) # name int type variable chilo, etake string e convert korlam
print("you have " + new_name + " characters in your name") 

# some examples
print(100 + float(70.5))
print(100 + 70.5)
print(str(100) + str(200))


# 2 digit er ekta number nibo then tader digit sum korbo
num = input()
print(int(num[0])+int(num[1]))



# mathemetical operations
'''
precedence of operators: PEMDAS
    1. parentheses
    2. exponent ( ** )
    3. multiplication + division (je left e thakbe she beshi priority pabe)
    4. addition + subtraction (same)

'''

print(3 * 3 + 3 / 3 -3)

# BMI calculator
weight = input()
height = input()

weight_kg = float(weight)
height_m = float(height)

bmi = weight_kg / height_m**2

print(int(bmi))


# number manipulation
print(8/3) # 2.6666666...
print(int(8/3)) # 2. it prints the floor value.
print(round(8/3)) # 3
print(round(8/3,3)) # doshomiker por 3 ghor dekhabe


# f-string. python e ekadhik data type normally eksathe print kora jay na. f-string use kore easily eita kora jay.
score = 0
height = 5.7
result = True

print(f"your mark is {score} and your height is {height} and your result is {result}.")


#project
print("Welcome ot the tip calculator.")
bill = float(input("What was the total bill? $"))
percentage = int(input("What percentage tip would you like to give? 10,12, or 15? "))
person = int(input("How many people to split the bill? "))

result= round( ((percentage/100)*bill + bill) / person ,2)

print(f"Each person should pay: ${result}")