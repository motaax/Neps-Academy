#include <stdio.h>

int main() {
    int horas;
    scanf("%d", &horas);

    int dormir = (horas - 9 + 24) % 24;

    printf("%d\n", dormir);

    return 0;
}