#include <stdio.h>

char* title(char s[]) {
    int i = 0;

    // primeira letra
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 'a' + 'A';
    }

    for (i = 1; s[i] != '\0'; i++) {
        if (s[i-1] == ' ') {
            // início de palavra
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 'a' + 'A';
            }
        } else {
            // resto da palavra
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
    }

    return s;
}

int main() {
    char frase[1000];

    fgets(frase, 1000, stdin);

    title(frase);

    printf("%s", frase);

    return 0;
}