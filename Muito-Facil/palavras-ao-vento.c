#include <stdio.h>

int main() {
    int V;
    char F[105];

    scanf("%d", &V);
    getchar(); 

    fgets(F, sizeof(F), stdin);

    for (int i = 0; i < V; i++) {
        printf("%s", F);
    }

    return 0;
}