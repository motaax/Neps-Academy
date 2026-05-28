#include <stdio.h>

int main() {
    int a, s, d;
    scanf("%d", &a); // altura do muro
    scanf("%d", &s); // sobe por dia
    scanf("%d", &d); // desce por noite

    int dias = 0;
    int altura = 0;

    while (altura < a) {
        dias++;
        altura += s;

        // se já chegou ao topo, não escorrega
        if (altura >= a) {
            break;
        }

        altura -= d;
    }

    printf("%d\n", dias);

    return 0;
}