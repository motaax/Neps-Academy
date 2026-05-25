#include <stdio.h>

#define MAX 10005
int x[MAX], y[MAX];

int main() {
    int m, n;
    
    if (scanf("%d %d", &m, &n) != 2) return 0;
    
    for (int i = 0; i < m; i++) scanf("%d", &x[i]);
    for (int i = 0; i < n; i++) scanf("%d", &y[i]);
    
    int len = m > n ? m : n;
    int carry = 0;
    
    for (int i = len - 1; i >= 0; i--) {
        int soma = x[i] + y[i] + carry;
        x[i] = soma % 2;  
        carry = soma / 2;
    }
    
    while (len > 0 && x[len - 1] == 0) {
        len--;
    }
    
    for (int i = 0; i < len; i++) {
        printf("%d%c", x[i], i == len - 1 ? '\n' : ' ');
    }
    
    return 0;
}