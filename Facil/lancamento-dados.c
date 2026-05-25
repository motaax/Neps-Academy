#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int freq[13] = {0};

    for (int i = 0; i < n; i++) {
        int valor;
        scanf("%d", &valor);

        freq[valor]++;
    }

    int maior = 0;

    for (int i = 1; i <= 12; i++) {
        if (freq[i] > maior) {
            maior = freq[i];
        }
    }

    for (int i = 1; i <= 12; i++) {
        if (freq[i] == maior) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}