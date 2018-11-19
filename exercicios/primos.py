n = int(input('n: '))
primos = []
soma_primos = 0

# Testamos se cada valor de x de 2 ateh n eh primo
for x in range(2, n):
    if all(x % p != 0 for p in primos):
        primos.append(x)
        soma_primos += x
        # print(x, end=' ')

print(soma_primos, end='')
print()