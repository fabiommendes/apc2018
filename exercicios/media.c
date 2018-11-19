#include<stdio.h>


int main() {
    int n;
    printf("quantos numeros? ");
    scanf("%d", &n);
    
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        double x;
        scanf("%lf", &x);
        soma += x;
    }

    printf("media: %lf\n", soma / n);

    return 0;
}
