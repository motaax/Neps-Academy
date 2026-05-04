#include <stdio.h>
#include <string.h>

int main() {
    char estado[30];
    scanf("%s", estado);

    if (strcmp(estado, "roraima") == 0 ||
        strcmp(estado, "acre") == 0 ||
        strcmp(estado, "amapa") == 0 ||
        strcmp(estado, "amazonas") == 0 ||
        strcmp(estado, "para") == 0 ||
        strcmp(estado, "rondonia") == 0 ||
        strcmp(estado, "tocantins") == 0) {
        
        printf("Regiao Norte\n");
    } else {
        printf("Outra regiao\n");
    }

    return 0;
}