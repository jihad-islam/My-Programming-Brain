#1 snakify
a = int (input())
b = int (input())

print(a+b)

#2
name = input()
print("hi",name)

#3
a = int(input())
print(a*a)

#area of a triangle
base = int(input())
height = int(input())
area = .5*base*height

print(area)

#5
name = input()
print("Hello, {}!".format(name)) #space alada korar jonne .format() use kora hoise

#duita print use korle by default new line ashbe eta remove korar niyom
print("Jihad", end = " ")
print("Islam")

#.format()
a = "Jihad"
b = "Islam"
print("{} + {}".format(a,b))

#division and modulus
a=7
b=5
print(a/b) #normal division
print(a//b) #floor division
print(a%b) #modulus

#6
a = int(input())
print("The next number for the number {} is {}".format(a,a+1))