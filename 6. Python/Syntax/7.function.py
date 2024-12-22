# 1/2! + 3/4! + 5/6! + .........
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

def summation(n):
    sum = 0
    
    for i in range(n):
        a = 2 * i + 1
        b = 2 * i + 2
        sum += a / factorial(b)
    
    return sum

n = int(input("terms: "))


result = summation(n)

print("summation is:", result)