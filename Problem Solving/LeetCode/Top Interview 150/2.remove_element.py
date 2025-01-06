a = [1, 2, 2, 2, 5, 6, 8, 2, 10]
val = 2

final = []

for x in a:
    if x != val:
        final.append(x)

print(len(final))