#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int x;
    int substituir = 0, consertar = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &x);

        if(x < 50) {
            substituir++;
        } else if(x < 85) {
            consertar++;
        }
    }

    printf("%d %d\n", substituir, consertar);

    return 0;
}