# input and print list
l = input().split()
l = [int(x) for x in input().split()]
for i in range(0, len(l), 1):
    print(l[i])



# list iteration
l = [int(x) for x in input().split()]
print(l) # with bracket and comma
print(*l) # without bracket and comma
print(l[2])
print(l[::-1]) #reverse
print(*l[::-1])


# swap min and max value
l = [int(x) for x in input().split()]

minimum = min(l)
maximum = max(l)

min_index = l.index(minimum)
max_index = l.index(maximum)

l[min_index], l[max_index] = l[max_index], l[min_index]

print(*l)

# push and pop. list e push nai, append ase.
l = [int(x) for x in input().split()]

l.append("jihad")
l.append(20)

l.pop()

print(*l)


# 2d list
l = [[int(x) for x in input().split()] for _ in range(3)]  # Change '3' to the number of rows

# Print the 2D list
for row in l:
    for col in row:
        print(col, end=' ')
    print()


#print 2d list
l= [[1,2,3], [4,5,6], [7,8,9]]

for row in l:
  for col in row:
    print(col, end=' ')
  print()