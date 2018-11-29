#include <stdio.h>

// Para casa!
long fib(long n) {
    if (n == 0) { return 1; }
    if (n == 1) { return 1; }
    return fib(n - 1) + fib(n - 2);
}

long double fat(long double n) {
    return (n <= 1)? 1: n * fat(n - 1);
}

long double fat_(long double n) {
    long double acc = 1;
    for (long double m = 1; m <= n; m++) {
        acc *= m;
    }
    return acc;
}

void main () {
    long double n;
    printf("n: ");
    scanf("%llf", &n);
    printf("fat  n: %llf\n", fat(n));
    printf("fat_ n: %llf\n", fat_(n));
}