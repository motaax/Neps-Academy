#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n == 1) {
        printf("um");
    } else if(n == 2) {
        printf("dois");
    } else if(n == 3) {
        printf("tres");
    } else {
        printf("Numero desconhecido");
    }
      
    return 0;
}