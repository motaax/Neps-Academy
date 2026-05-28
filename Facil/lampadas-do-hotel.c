#include <stdio.h>

int main() {
    int IA, IB, FA, FB;
    scanf("%d %d %d %d", &IA, &IB, &FA, &FB);

    int dA = IA ^ FA;
    int dB = IB ^ FB;

    if (dB == 0) {
        printf("%d\n", dA);
    } else {
        if (dA == 0) {
            printf("2\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}