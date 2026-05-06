#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num;
    int m2 = 0, m3 = 0, m4 = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) m2++;
        if (num % 3 == 0) m3++;
        if (num % 4 == 0) m4++;
    }

    printf("%d \n", m2);
    printf("%d \n", m3);
    printf("%d \n", m4);

    return 0;
}