# Instruções

1. A prova é individual e as respostas devem ser enviadas pelo formulário https://docs.google.com/forms/d/e/1FAIpQLSeJ_krbAq3n0G_2IAfudHRZIgbBmLKx5Iq9kK1qjskllxJp7A/viewform
2. Você pode resolver as questões de programação em Pytuguês, Python ou C
3. Você pode utilizar o computador para testar os programas, mas não pode passar 
   respostas para outros alunos. Quem fizer isto terá a prova imediatamente anulada.
4. Você pode utilizar o livro "Introdução à programação com Python" ou na documentação do Pytuguês (https://pythonhosted.org/pytuga/)
5. A correção considere tanto o resultado produzido pelos programas quanto a qualidade do código. 

## Personalização pelo número de matrícula
Algumas questões estão personalizadas pelo número de matrícula. Para resolvê-las
considere o número de matrícula dividido em 3 partes de 3 dígitos cada:

    18/1234567
    ^^^^---^^^
      A  B  C

No caso temos A=181, B=234 e C=567. Lembre destes três números quando fizer
suas questões pois a própria pergunta pode depender destes números.


# Questão 1  (0.5 pt)

Calcule o valor de A elevado a B.

Dica: Trata-se de um número potencialmente grande. Copie e cole a resposta do
calculada no Python ou Pytuguês no formulário. 


# Questão 2  (1.5 pt)

Crie um programa que some todos os números no intervalo do menor valor entre 
A, B e C até o maior valor entre eles.

Ex.: se A, B, C forem iguais à 1, 5, 2, respectivamente, o programa deve calcular
1 + 2 + 3 + 4 + 5 = 15.


# Questão 3  (1.5 pt)

A sequência de Collatz começa em um número arbitrário e termina quando no valor 
`1`. Calculamos cada termo em função do termo anterior utilizamos a seguinte 
fórmula:

    n -> n / 2    (se n for par)
         3*n + 1  (se n for ímpar)

(a) Calcule quantos termos possui a sequência de Collatz para o **maior** dos três 
valores A, B, C. (b) Também diga qual é o maior valor atingido nesta sequência.

Ex.: Se A, B, C = 1, 5, 2, o maior termo é 5, que possui uma sequência de Collatz
de 6 termos [5, 16, 8, 4, 2, 1] cujo maior item é 16.


# Questão 4  (1.5 pt)

Considere o código abaixo:

```python
minAB = min(A, B)  # menor valor entre A e B
maxAB = max(A, B)  # maior valor entre A e B

# Pytuguês
se x == 0:
    print('nulo')
ou então se x == 42:
    print('resposta para *a* pergunta')
ou então se x > maxAB:
    print('grande')
se x < 0:
    print('negativo')
se minAB < x < maxAB:
    print('médio')
senão:
    print('nada de especial')    

# Python
if x == 0:
    print('nulo')
elif x == 42:
    print('resposta para *a* pergunta')
elif x > maxAB:
    print('grande')
if x < 0:
    print('negativo')
if minAB < x < maxAB:
    print('médio')
else:
    print('nada de especial')
```

A intenção do programa é imprimir somente a informação mais específica sobre 
um número, sendo que a condição de "senão" somente deveria ser executada se 
nenhuma outra mensagem tivesse sido mostrada. 

Consideramos a condição mais específica como sendo aquela com o menor 
número de possibilidades. Condições sejam igualmente específicas devem ser 
testadas na mesma ordem que aparecem no programa original.

a) (0,5) Explique porque o código acima está incorreto. Na sua explicação, dê pelo 
menos um exemplo de como o programa falha e explique o motivo do bug aparecer.
b) (1,0) Modifique o programa para corrigir todos os erros 


# Questão 5 (1 pt)

O código abaixo calcula uma série de potências (que por um acaso é uma 
aproximação para ln(1 - x)). 

```python
x = ...
n = 0
resultado = 0
termo = 1

# Pytuguês
enquanto x < 5:
    n = n + 1
    termo = termo * x
    resultado = resultado + termo / n

# Python
while x < 5:
    n = n + 1
    termo = termo * x
    resultado = resultado + termo / n
```

Modifique o código acima para utilizar o laço "para cada/for". Existem várias 
maneiras de simplificar este código e você pode aplicar outras simplificações.


# Questão 6  (2 pts)

O máximo divisor comum entre dois números x e y pode ser calculado por uma função 
recursiva utilizando a seguinte regra:

    mdc(x, 0) --> x
    mdc(x, y) --> mdc(y, x % y)

Crie uma função chamada mdc(x, y) que calcula o máximo divisor comum entre dois
números.


# Questão 7  (2 pts)

Calcule todos os divisores do seu número de matrícula. 

Dica: Este número é muito grande para realizar um teste de força bruta, por 
isso precisamos utilizar uma abordagem mais eficiente. Podemos encontrar alguns 
divisores do número percorrendo todos valores de 1 até a raiz 
deste, guardando apenas aqueles em que o resto da divisão é nulo. Teste com alguns
números pequenos para descobrir um método que funcione para encontrar o conjunto
completo de divisores.
