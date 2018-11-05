#include <stdio.h>

char checkio(char* text) {
    // Declara uma lista de contagens nulas
    // counts = [0] * 26
    int counts[26];
    for (int i=0; i<26; i++) {
        counts[i] = 0;
    }

    // Calcula quantas ocorrencias de cada
    // letra existe na palavra
    int idx = 0;
    while (text[idx] != 0) {
        if (text[idx] >= 'a' && text[idx] <= 'z') {
            int pos = text[idx] - 'a';
            counts[pos] += 1;
        }
        idx++;
    }

    // Calcula a letra com o maior numero de
    // ocorrencias
    int most_common = 0;
    int max_count = 0;
    for (int i=0; i<26; i++) {
        int count = counts[i];
        if (count > max_count) {
            max_count = count;
            most_common = i;
        }
    }
    return 'a' + most_common;
}

void main() {
    char string[200];

    // string = input("texto: ")
    printf("texto: "); scanf("%s", string);

    // print("Letra mais comum:", checkio(string)); 
    printf("Letra mais comum: %c\n", checkio(string));
}