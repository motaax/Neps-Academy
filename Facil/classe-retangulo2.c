#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int x1, y1, x2, y2;
    char op;

    for (int i = 0; i < N; i++) {
        scanf(" %c", &op);

        if (op == 'R') {
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        } 
        else if (op == 'A') {
            int area = (x2 - x1) * (y1 - y2);
            printf("%d\n", area);
        }
    }

    return 0;
}