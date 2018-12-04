Prova 3
=======

Nome: 
Matrícula:


## Questão 1 - Bases numéricas (2-3pts)

O valor "10" escrito em uma base b sempre possui o valor de b (ex.: "10" em decimal, vira o número 10 e "10" em binário é o número 2).

Responda:
a) 1pt - Qual é o valor decimal do número "111" se ele estiver escrito na base 12?
b) 1pt - De forma oposta, qual é representação do número 111 na base 12?
c) 1pt - Qual é o valor decimal de "11" e de "111" em uma base b qualquer?

Versão padawan, valendo 0,5pts: troque a base 12 por base binária.


## Questão 2 - Jogo dos 11* erros (2pts)

Encontre todos os erros do código abaixo e diga como corrigí-los. O objetivo do programa é mostrar o máximo de 3 números do tipo double lidos do terminal.

```C
double max(double x, double y) {
    if (x > y) { return y; }
    if (x < y) { return x; }
}

int main () {
    scanf("%lf %lf %lf", a, b, c);
    printf("max: %d\n", max(max(a, b), c));
}
```

Dica: 11 não é necessariamente interpretado em base 10!

## Questão 3 - Strings (2,5pts)

Marque V ou F para as afirmações sobre strings e chars em C (cada opção errada anula 0.5 certa).

- [ ] Strings são sequencias de letras do alfabeto.
- [ ] Existem 256 valores diferentes para uma variável do tipo char.
- [ ] 'a' + 2 == 'c', mas "a" + 2 é um erro.
- [ ] O elemento st[i], onde st é uma string, é do tipo char.
- [ ] A string "Hello" usa exatamente 5 bytes na memória.
- [ ] É impossível conhecer o tamanho de uma string somente
      olhando seu valor pois o C não guarda o tamanho das
      variáveis de array.
      
Obs.: Você pode pular até uma alternativa sem perder pontos.

## Questão 4 - Show me the code! (3pts)

Converta o programa abaixo de Python para C. O programa em C deve realizar a mesma funcionalidade do original, mas pode reorganizar partes do código.

Um anti-milionário é uma pessoa que deve mais de R$ 1.000.000,00. Dadas as taxas do cheque especial, é muito mais fácil virar um anti-milionário que um milionário. Seu programa deve perguntar o valor do empréstimo, a taxa de juros e o pagamento mensal e mostrar se o usuário conseguirá pagar a dívida ou virará um anti-milionário depois de n meses. 

```python
def sinal(x):
    """Retorna 1 ou -1 de acordo com o sinal de x"""
    if x < 0:
        return -1
    else:
        return 1

def anti_milionario(emprestimo, mensal, juros):
    """Retorna o numero de meses necessarios para a 
    pessoa virar um anti-milionario
    
    Argumentos:
        emprestimo: valor inicial do emprestimo
        mensal: pagamento mensal
        juros: juros compostos mensal (em %)

    Retorna:
        O numero de meses necessario para virar um
        anti-milionario. Caso a pessoa pague a 
        divida, retorna o numero de meses para pagar
        a divida como um valor negativo
    """
    r = 1 + juros / 100
    n = 0

    while 0 <= emprestimo < 1_000_000:
        n += 1
        emprestimo = r * emprestimo - mensal

    return sinal(emprestimo) * n


# main
valor = float(input('emprestimo: '))
juros = float(input('juros (%): '))
mensal = float(input('pagamento mensal: '))
n = anti_milionario(valor, mensal, juros)

if n >= 0:
    print('Voce vira anti-milionario em %d meses' % n)
else:    
    print('Voce pagara a divida em %d meses' % (-n)) 
```