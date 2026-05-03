#include <stdio.h>

int main() {
    long long X, Y, Z, N;
    
    scanf("%lld %lld %lld %lld", &X, &Y, &Z, &N);
    
    long long total = X + Y + Z;
    long long L = total % N;
    
    printf("%lld\n", L);
    
    return 0;
}