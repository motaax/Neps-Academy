#include <stdio.h>

int main() {
    int L;
    scanf("%d", &L);

    for (int i = 0; i < L; i++) {
        int N;
        char c;

        scanf("%d %c", &N, &c);

        for (int j = 0; j < N; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}   