# Pergunta vários números de uma única vez
print('Digite os números separados por vírgula')
numeros = input('Números: ')
numeros = [float(x) for x in numeros.split(',')]

print('Média:', sum(numeros) / len(numeros))
print('Tamanho:', len(numeros))