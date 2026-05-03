#include <stdio.h>

int main() {
    long long A, B, C;
    
    scanf("%lld %lld %lld", &A, &B, &C);
    
    if (A + B == C) {
        printf("correct!\n");
    } else {
        printf("wrong!\n");
    }
    
    return 0;
}