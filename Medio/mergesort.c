#include <stdio.h>

#define MAX 100000

long long v[MAX], aux[MAX];

void mergesort(int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;

    mergesort(l, m);
    mergesort(m + 1, r);

    int i = l, j = m + 1, k = l;

    while (i <= m && j <= r) {
        if (v[i] > v[j])
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    }

    while (i <= m) aux[k++] = v[i++];
    while (j <= r) aux[k++] = v[j++];

    for (i = l; i <= r; i++)
        v[i] = aux[i];
}

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%lld", &v[i]);

    mergesort(0, n - 1);

    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%lld", v[i]);
    }

    printf("\n");

    return 0;
}