nome = input("Nome: ")
idade = float(input("Idade: "))
print('Oi, %s!' % nome)

# Condicionais
if idade >= 18:
    print('Em quem você vai votar?')
elif idade >= 16:
    print('Animado para votar?')
else:
    print('Vamos esperar alguns anos pra votar')

# Laços
for x in [42, 0, 3.14, 1]:
    print('Olá', x)

for x in range(1, 11, 2):
    print('Oi', x)

x = 10
while x > 0:
    print('X maior que zero:', x)
    x = x - 1 

# Definindo funções
def mdc(x: int, y: int) -> int:
    if y == 0:
        return x
    else:
        return mdc(y, x % y)

a = int(input('a: '))
b = int(input('b: '))
print(mdc(a, b))