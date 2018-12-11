# Prova substitutiva

Você deve escolher 2 entre as 3 questões de programação e resolver uma delas em Python e outra em C.

## Questão de programação A  (2,5pts)

Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e quantos são múltiplos de dois e mostre esta informação.

### Entrada
A entrada contém 5 valores inteiros quaisquer.

### Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.

### Exemplo de Entrada

	a: 7
	b: -5
	c: 6
	d: -4
	e: 12

### Saída correspondente

	3 valores pares
	2 multiplos de 3
	
	
## Questão de programação B  (3,0pts)

Um número é dito triangular se for a soma de valores consecutivos a partir de 1. Por exemplo, 10 é um número triangular porque 10 = 1 + 2 + 3 + 4. Crie um programa que leia um número inteiro positivo e diga se ele é triangular ou não.

### Entrada

A entrada contém 1 valor inteiros positivo.

### Saída

Imprima uma mensagem dizendo se o número é triangular ou nao.

### Exemplo de Entrada

	n: 11
	
### Saída correspondente

	11 nao e um numero triangular
	
	
## Questão de programação C (3,5pts)

O fractal de Mandelbrot é construido em um plano x, y iterando a seguinte regra indefinidamente, partindo de a = b = 0,

    a' = a * a - b * b + x
    b' = 2 * a * b + y
    
Os pontos para os quais esta regra diverge são pintados de branco e os pontos que convergem são pintados de preto. Sabemos que um ponto
diverge sempre que x^2 + y^2 >= 1 e que converge se passarem 2 iterações consecutivas com o mesmo valor de a e b.

### Entrada

Dois números reais no intervalo entre -1 e 1

### Saída

Imprima uma mensagem dizendo se o ponto é preto ou branco.

### Exemplo de Entrada

	x: 0
	y: 0
	
### Saída correspondente

	o ponto (0.0, 0.0) e preto
	
	
## Questão teórica: Python vs. C (2,5pts)

Discuta as principais semelhanças e diferenças entre Python e C segundo os seguintes aspectos:

1) tipos das variáveis
2) estruturas de controle e comandos da linguagem
3) velocidade e modelo de execução 

Discuta uma situação onde é mais recomendável utilizar o Python para desenvolver um programa e outra onde é mais recomendável utilizar o C. Justifique.


## Questão teórica: Recursão  (2,5pts)

O programa abaixo cria duas funções recursivas que calculam valores
numéricos.

```
def ping(x):
    return pong(x) * pong(x - 1)
    
    
def pong(x):
    if x <= 1:
        return 1
    return ping(x - 1) + pong(x - 1)
```

Calcule os valores de:
a) pong(1), ping(1), pong(2), ping(2), pong(3), ping(3)
b) Represente graficamente como se calcularia o valor de ping(3). Dica: podemos representar as chamadas de função como uma árvore.
c) Explique porque a dupla ping/pong, do modo que foi definida é muito ineficiente computacionalmente. Dica: conte como o número de passos cresce de ping(2) para ping(2) e extrapole como este valor aumenta para argumentos maiores.


### Bônus Extra (+2pts ou vale como questão de programação de 4pts)

Crie uma implementação eficiente de ping(n). Você pode encontrar um algoritmo eficiente baseado apenas em laços ou utilizar dicionários para armazenar as computações intermediárias.
