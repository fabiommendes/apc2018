n = int(input('quantos numeros? '))
soma = 0
for i in range(n):
    soma += float(input())
print('media:', soma / n)