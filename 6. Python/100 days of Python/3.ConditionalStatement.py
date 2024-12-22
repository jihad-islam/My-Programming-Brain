# odd or even
num = int(input())

if num%2 == 0:
    print("even")
else:
    print("odd")

# BMI 2.0
height = float(input())
weight = float(input())

bmi = round(weight/height**2 , 2)

if bmi<= 18.5:
    print(f"Your BMI is {bmi}, you are underweight")
elif bmi > 18.5 and bmi<= 25:
    print(f"Your BMI is {bmi}, you are normal")
elif bmi > 25 and bmi<= 30:
    print(f"Your BMI is {bmi}, you are slightly overweight")
else:
    print(f"Your BMI is {bmi}, you are clinicaly obese")

# leap year
'''
conditions of leap year:  
                1. 4 diye vag na gele not leap year.
                2. 4 diye vag gese 

'''


# method 1: eta hoise kina jani na.
year = int(input())

if year % 4 == 0 and year % 100 != 0 and year % 400 ==0 :
      print("leap year")

else:
      print("not leap year")


# method 2: 
year= int(input())

if year % 4 ==0:
    if year % 100 ==0:
        if year % 400 == 0:
            print("leap year")
        else:
            print("not leap year")
    else:
        print("leap year")
else:
    print("not leap year")


# pizza bill
size = input()
pepperoni = input()
cheese = input()

bill = 0

if size == 'L':
    bill = 25
    if pepperoni == 'Y':
        bill += 3
    else:
         bill += 0
    if cheese == 'Y':
         bill += 1
    else:
         bill += 0

if size == 'M':
    bill = 20
    if pepperoni == 'Y':
        bill += 3
    else:
         bill += 0
    if cheese == 'Y':
         bill += 1
    else:
         bill += 0

if size == 'S':
    bill = 15
    if pepperoni == 'Y':
        bill += 2
    else:
         bill += 0
    if cheese == 'Y':
         bill += 1
    else:
         bill += 0

print(f"Thank you for choosing Python Pizza Deliveries! Your final bill is: ${bill}")

