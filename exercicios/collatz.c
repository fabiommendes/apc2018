#include <stdio.h>
#include "utils.c"

int main() {
    int n = read_int("n: ");
    
    while (n != 1) {
        printf("%d ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } 
        else {
            n = 3 * n + 1;
        }
    }
    printf("%d\n", n);

    return 0;
}