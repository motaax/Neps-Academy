#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char gabarito[N+1];
    char respostas[N+1];
    
    scanf("%s", gabarito);
    scanf("%s", respostas);
    
    int acertos = 0;
    
    for (int i = 0; i < N; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }
    
    printf("%d\n", acertos);
    
    return 0;
}