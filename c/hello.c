#include <stdio.h>

// Comentário em C! (# comentário)

/*
 Bloco de comentário
 */


// Definição de funções
int soma(int a, int b) {
    return a + b;
}


// Imprime hello world n vezes (while)
void print_hello_while(int n) {
    while (n > 0) {
        printf("Hello World!\n");
        n--;
    }
}


// Imprime hello world n vezes (for)
void print_hello_for(int n) {
    for (int i = 0; i < n; i++) {
        printf("Hello World!\n");
    }
}


// Imprime hello world n vezes (for)
void print_collatz(int n) {
    printf("%d", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } 
        else {
            n = 3 * n + 1;
        }
        printf(", %d", n);
    }
    printf("\n");
}

// Imprime hello world n vezes (for)
int collatz_size(int n) {
    int size = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } 
        else {
            n = 3 * n + 1;
        }
        size++;
    }
    return size;
}


int main() {
    int n = 0, m = 0;
    
    for (int i = 1; i < 100000; i++) {
        m = collatz_size(i);
        if (m > n) {
            printf("%d: tamanho %d\n", i, m);
            n = m;
        }
    }
    return 0;
}