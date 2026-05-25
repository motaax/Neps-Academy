#include <stdio.h>
#include <string.h>

int main() {
    char s[41];
    scanf("%s", s);

    int n = strlen(s);
    int maior = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int palindromo = 1;

            int l = i, r = j;
            while (l < r) {
                if (s[l] != s[r]) {
                    palindromo = 0;
                    break;
                }
                l++;
                r--;
            }

            if (palindromo) {
                int tamanho = j - i + 1;
                if (tamanho > maior)
                    maior = tamanho;
            }
        }
    }

    printf("%d\n", maior);

    return 0;
}