n = int(input('n: '))

while n != 1:
    print(n, end=' ')
    if n % 2 == 0:
        n = n // 2
    else:
        n = 3 * n + 1
print(n)