#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char *meses[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    char mes[20];
    int dia, ano;

    for (int i = 0; i < N; i++) {
        scanf("%s %d, %d", mes, &dia, &ano);

        int m = -1;

        for (int j = 0; j < 12; j++) {
            if (strcmp(mes, meses[j]) == 0) {
                m = j + 1;
                break;
            }
        }

        if (m == -1 || dia < 1 || dia > 31) {
            printf("Invalid\n");
            continue;
        }

        int yy = ano % 100;

        printf("%02d/%02d/%02d\n", m, dia, yy);
    }

    return 0;
}