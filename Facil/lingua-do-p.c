#include <stdio.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'p' && s[i+1] != '\0') {
            i++; 
            printf("%c", s[i]);
        } else {
            printf("%c", s[i]);
        }
    }

    return 0;
}