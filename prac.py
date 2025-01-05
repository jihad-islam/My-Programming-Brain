def merge(a, m, b, n):
    final = []
    i = 0
    j = 0

    while i < m and j < n:
        if a[i] < b[j]:
            final.append(a[i])
            i += 1

        else:
            final.append(b[j])
            j += 1

    while i < m:
        final.append(a[i])
        i += 1

    while j < n:
        final.append(b[j])
        j += 1

    print(final)


a = [1, 2, 3, 4, 5]
b = [3, 4, 5, 6, 7, 10, 20]
merge(a, len(a), b, len(b))
