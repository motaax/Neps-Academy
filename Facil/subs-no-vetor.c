#include <stdio.h>

int main() {
    int v[10];
    int menor, i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    menor = v[0];

    for(i = 1; i < 10; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
    }

    printf("Menor: %d\n", menor);

    printf("Ocorrencias: ");

    for(i = 0; i < 10; i++) {
        if(v[i] == menor) {
            printf("%d ", i);
            v[i] = -1; 
        }
    }

    printf("\n");

    for(i = 0; i < 10; i++) {
        printf("%d", v[i]);

        if(i < 9) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}