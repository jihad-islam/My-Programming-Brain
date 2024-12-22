#1
a=int(input())
result= a%10
print(result)

#sum of three digits
a=int(input())

x=a%10
y=a//10 % 10
z= a//100

print(x+y+z)

#print only fraction part
x = float(input())
print(x - int(x))

#print first digit after dicimal point
a = float(input())

x = a*10
y = int(x) % 10

print(y)

#ceil value. // eta diye floor.
import math

a = float(input())

print(math.ceil(a))
