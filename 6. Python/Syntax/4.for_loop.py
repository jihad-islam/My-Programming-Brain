#print-1
for i in range(1, 11, 1): # start, stop, increment or decrement.
  print(i)

#print-2
a = int(input())
b = int(input())

for i in range (a,b+1):
    print(i)

#print-3
a = int(input())
b = int(input())

if a>b:
    for i in range (a, b-1, -1): # 10 to 1
        print(i)

else:
    for i in range (a,b+1): # 1 to 10
        print(i)

# sum of 10 numbers
sum = 0
for i in range(10): #10 bar loop cholbe
    sum += int(input())
print(sum)

# sum of n numbers
n = int(input())
sum =0

for i in range(n):
    sum += int(input())
    
print(sum)

#sum of cube
n = int(input())
sum = 0

for i in range(1,n+1):
    sum += i**3 # ** diye power bujhay

print (sum)

#factorial
n = int(input())
fact = 1

for i in range(1, n+1):
    fact *= i

print(fact)

# n ta value input nibo koyta zero ase find out kora lagbe
n = int(input())
count = 0

for i in range(n):
    if(int(input()) == 0):
        count = count + 1

print(count)

# sum of n factorial
n = int(input())

fact = 1
sum = 0

for i in range(1, n + 1):
    fact *= i
    sum += fact

print(sum)

#fibonacci sequence
n = int(input())

if n == 0:
    print(0)

else:
    a, b = 0, 1
    for i in range(2, n + 1):
        a, b = b, a + b
    print(b)

# 2
n = int(input("Enter the value of n: "))

if n == 0:
    print(0)
elif n == 1:
    print(0, ",", 1)
else:
    a, b = 0, 1
    print(0, ",", 1, end=", ")  # Print the first two Fibonacci numbers
    for i in range(2, n + 1):
        a, b = b, a + b
        if i < n:
            print(b, end=", ")  # Print Fibonacci numbers up to the (n-1)th term
        else:
            print(b)  # Print the nth Fibonacci number without a comma
