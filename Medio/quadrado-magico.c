#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int m[100][100];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int soma = 0;

    for(int j = 0; j < N; j++) {
        soma += m[0][j];
    }

    for(int i = 0; i < N; i++) {
        int s = 0;
        for(int j = 0; j < N; j++) {
            s += m[i][j];
        }
        if(s != soma) {
            printf("-1\n");
            return 0;
        }
    }

    for(int j = 0; j < N; j++) {
        int s = 0;
        for(int i = 0; i < N; i++) {
            s += m[i][j];
        }
        if(s != soma) {
            printf("-1\n");
            return 0;
        }
    }

    int d1 = 0;
    for(int i = 0; i < N; i++) {
        d1 += m[i][i];
    }

    int d2 = 0;
    for(int i = 0; i < N; i++) {
        d2 += m[i][N - 1 - i];
    }

    if(d1 != soma || d2 != soma) {
        printf("-1\n");
        return 0;
    }

    printf("%d\n", soma);

    return 0;
}