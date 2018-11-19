#include <stdio.h>
#include "utils.c"

int eh_primo(int, int*, int);


int main() {
    int n = read_int("n: ");
    int primos[100000];
    int soma_primos = 0;

    // guarda a posicao do proximo primo a ser descoberto 
    int p_idx = 0; 
    
    // Testamos se cada valor de x de 2 ateh n eh primo
    for (int x = 2; x < n; x++) {
        if (eh_primo(x, primos, p_idx)) {
            // Acrescenta x no final da lista de primos
            primos[p_idx] = x;
            p_idx++;
            soma_primos += x;
            // printf("%d ", x);
        }
    }
    printf("%d", soma_primos);
    printf("\n");
}

// all(x % p != 0 for p in primos)
int eh_primo(int x, int* primos, int n) {
    for (int i = 0; i < n; i++) {
        int p = primos[i];
        if (x % p == 0) {
            return 0; // x eh divisivel por p e logo nao-primo
        }
    }
    // x nao eh divisivel por nenhum p em primos!
    return 1;
}
