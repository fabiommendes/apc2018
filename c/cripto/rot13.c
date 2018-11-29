#include <stdio.h>

char rot13(char c) {
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + 13) % 26;
    }
    else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + 13) % 26;
    }
    else {
        return c;
    }
}


void cripto(char* msg) {
    for (int i=0; msg[i]; i++) {
        msg[i] = rot13(msg[i]);
    }
}


void main () {
    char msg[1000];
    printf("msg: ");
    scanf("%[^\n\r]s", msg);
    cripto(msg);
    printf("\n\nRESULTADO:\n\n%s\n", msg);
}
