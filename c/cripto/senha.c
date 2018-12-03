#include <stdio.h>

char rot(char c, int n) {
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + n) % 26;
    }
    else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + n) % 26;
    }
    else {
        return c;
    }
}


void cripto(char* msg, char* passwd) {
    int j = 0;
    for (int i=0; msg[i]; i++) {
        if (passwd[j] == 0) { j = 0; }
        char n = (passwd[j] - 'a');
        msg[i] = rot(msg[i], n);
        j++;
    }
}


void main () {
    char msg[1000];
    char senha[100];
    
    printf("msg: ");
    scanf("%[^\n\r]s", msg);
    getchar();
    printf("senha (somente minusculas): ");
    scanf("%[^\n\r]s", senha);
    cripto(msg, senha);
    printf("\n\nRESULTADO:\n\n%s\n", msg);
}
