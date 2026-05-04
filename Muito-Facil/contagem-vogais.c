#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char S[1001];

    scanf("%d", &N);
    scanf("%s", S);

    int contador = 0;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' ||
            S[i] == 'o' || S[i] == 'u') {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}