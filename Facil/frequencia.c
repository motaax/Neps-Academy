#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int visto[1000001] = {0};
    int x, total = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        
        if (!visto[x]) {
            visto[x] = 1;
            total++;
        }
    }

    printf("%d\n", total);

    return 0;
}