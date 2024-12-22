# minimum
a = int(input())
b = int(input())

if a<b:
    print(a)
else:
    print(b)

#positive, negative or zero
a = int(input())

if a>0:
    print("1")
elif a<0:
    print("-1")
else:
    print("0")

#minimum of three numbers
a = int(input())
b = int(input())
c = int(input())

if a>=b and c>=b:
    print(b)
elif b>=c and a>= c:
    print(c)
else:
    print(a)

#equal three integer
a = int(input())
b = int (input())
c = int(input())

if a==b==c:
    print("3")
elif a==b or b==c or c==a:
    print("2")
else:
    print("0")

#leap year
year = int(input())

if (year % 4 == 0) and (year % 100 != 0) or (year % 400 == 0):
    print('LEAP')
else:
    print('COMMON')