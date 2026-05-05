#include <stdio.h>

int main() {
    int valorProg, habProg;
    int valorDes, habDes;
    int N;

    scanf("%d %d", &valorProg, &habProg);
    scanf("%d %d", &valorDes, &habDes);
    scanf("%d", &N);

    int reqProg, reqDes;
    int projetosValidos = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &reqProg, &reqDes);

        if (reqProg <= habProg && reqDes <= habDes) {
            projetosValidos++;
        }
    }

    printf("Programador: R$ %d\n", projetosValidos * valorProg);
    printf("Designer: R$ %d\n", projetosValidos * valorDes);

    return 0;
}