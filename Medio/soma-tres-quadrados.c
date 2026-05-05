#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if(N < 0) {
        printf("NO\n");
        return 0;
    }

    while(N % 4 == 0 && N > 0) {
        N /= 4;
    }

    if(N % 8 == 7)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}