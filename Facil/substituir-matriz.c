#include <stdio.h>

int main() {
    int a[3][3];
    int maior;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    maior = a[0][0];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] > maior) {
                maior = a[i][j];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] == maior) {
                a[i][j] = -1;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d", a[i][j]);
            if(j < 2) printf(" ");
        }
        printf("\n");
    }

    return 0;
}