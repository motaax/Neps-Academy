#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A = 0, B = 0; 
    int x;

    for(int i = 0; i < N; i++) {
        scanf("%d", &x);

        if(x == 1) {
            A = !A;
        } else if(x == 2) {
            A = !A; 
            B = !B; 
        }
    }

    printf("%d\n", A);
    printf("%d\n", B);

    return 0;
}