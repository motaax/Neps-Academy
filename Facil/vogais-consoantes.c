#include <stdio.h>

int main() {
    char s[101];
    int i = 0;

    scanf("%s", s);

    printf("Vogais: ");
    while (s[i] != '\0') {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            printf("%c", s[i]);
        }
        i++;
    }

    printf("\nConsoantes: ");
    i = 0;

    while (s[i] != '\0') {
        if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')) {
            printf("%c", s[i]);
        }
        i++;
    }

    printf("\n");

    return 0;
}