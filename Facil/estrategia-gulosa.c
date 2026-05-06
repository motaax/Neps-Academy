#include <stdio.h>

int main() {
    int V;
    scanf("%d", &V);

    int moedas[] = {100, 50, 25, 10, 5, 1};
    int total = 0;

    for (int i = 0; i < 6; i++) {
        total += V / moedas[i];
        V = V % moedas[i];
    }

    printf("%d\n", total);

    return 0;
}