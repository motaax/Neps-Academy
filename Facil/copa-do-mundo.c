#include <stdio.h>

int main() {
    char times[16] = {
        'A','B','C','D','E','F','G','H',
        'I','J','K','L','M','N','O','P'
    };

    int M, N;

    for (int i = 0; i < 8; i++) {
        scanf("%d %d", &M, &N);
        if (M > N)
            times[i] = times[2*i];
        else
            times[i] = times[2*i + 1];
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &M, &N);
        if (M > N)
            times[i] = times[2*i];
        else
            times[i] = times[2*i + 1];
    }

    for (int i = 0; i < 2; i++) {
        scanf("%d %d", &M, &N);
        if (M > N)
            times[i] = times[2*i];
        else
            times[i] = times[2*i + 1];
    }

    scanf("%d %d", &M, &N);
    if (M > N)
        printf("%c\n", times[0]);
    else
        printf("%c\n", times[1]);

    return 0;
}