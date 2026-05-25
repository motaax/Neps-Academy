#include <stdio.h>

int main() {
    int c1, l1, c2, l2;
    
    scanf("%d", &c1);
    scanf("%d", &l1);
    scanf("%d", &c2);
    scanf("%d", &l2);

    int area1 = c1 * l1;
    int area2 = c2 * l2;

    if (area1 > area2)
        printf("%d\n", area1);
    else
        printf("%d\n", area2);

    return 0;
}