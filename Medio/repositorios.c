#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int p, v, tipo; 
} Evento;

int comparar(const void *a, const void *b) {
    Evento *ea = (Evento *)a, *eb = (Evento *)b;
    if (ea->p != eb->p) return ea->p - eb->p;
    return ea->tipo - eb->tipo;
}

int main() {
    int c, n;
    if (scanf("%d %d", &c, &n) != 2) return 0;

    int total = c + n;
    Evento *evs = malloc(total * sizeof(Evento));

    for (int i = 0; i < total; i++) {
        scanf("%d %d", &evs[i].p, &evs[i].v);
        evs[i].tipo = (i < c) ? 0 : 1; 
    }

    qsort(evs, total, sizeof(Evento), comparar);

    int v_inst = -1, max_v_net = -1, id_atual = -1;

    for (int i = 0; i < total; i++) {
        if (evs[i].p != id_atual) {
            if (max_v_net != -1 && v_inst < max_v_net) {
                printf("%d %d\n", id_atual, max_v_net);
            }
            id_atual = evs[i].p;
            v_inst = -1;
            max_v_net = -1;
        }

        if (evs[i].tipo == 0) {
            v_inst = evs[i].v; 
        } else if (evs[i].v > max_v_net) {
            max_v_net = evs[i].v; 
        }
    }

    if (max_v_net != -1 && v_inst < max_v_net) {
        printf("%d %d\n", id_atual, max_v_net);
    }

    free(evs);
    return 0;
}