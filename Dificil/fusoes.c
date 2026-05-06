#include <stdio.h>

#define MAXN 100005

int parent[MAXN];

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b)
        parent[a] = b;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    char op;
    int a, b;

    for (int i = 0; i < K; i++) {
        scanf(" %c %d %d", &op, &a, &b);

        if (op == 'F') {
            unite(a, b);
        } else if (op == 'C') {
            if (find(a) == find(b))
                printf("S\n");
            else
                printf("N\n");
        }
    }

    return 0;
}