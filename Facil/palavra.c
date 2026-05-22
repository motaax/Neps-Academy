#include <stdio.h>

int main() {
    int n, l, c;
    char grid[105][105];
    
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    char *palavra = "word";

    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        scanf("%d %d", &l, &c);
        
        for (int i = 0; i < l; i++) {
            scanf("%s", grid[i]);
        }

        int count = 0;

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                for (int d = 0; d < 8; d++) {
                    int k;
                    for (k = 0; k < 4; k++) {
                        int ni = i + dx[d] * k;
                        int nj = j + dy[d] * k;
                        
                        if (ni < 0 || ni >= l || nj < 0 || nj >= c || grid[ni][nj] != palavra[k]) {
                            break; 
                        }
                    }
                    if (k == 4) count++;
                }
            }
        }
        
        printf("%d\n", count);
    }

    return 0;
}