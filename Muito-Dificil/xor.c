#include <stdio.h>
#include <string.h>

#define MAXN 300005
#define MAX_NODES 9350000
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int A[MAXN], L[MAXN], R[MAXN];
int ch[MAX_NODES][2], val[MAX_NODES], nc = 1;

int mn[MAXN * 4], lz[MAXN * 4];

int head_add[MAXN], head_rem[MAXN + 1], ev_l[MAXN * 2], ev_r[MAXN * 2], nxt[MAXN * 2], ec = 0;

void add_ev(int i, int l, int r, int t) {
    ev_l[ec] = l; ev_r[ec] = r;
    if (!t) { nxt[ec] = head_add[i]; head_add[i] = ec++; }
    else    { nxt[ec] = head_rem[i]; head_rem[i] = ec++; }
}

void reset_trie(int init_val) {
    nc = 1; ch[1][0] = ch[1][1] = 0; val[1] = init_val; nc = 2;
}

void ins(int x, int idx, int type) {
    int u = 1;
    val[u] = type ? min(val[u], idx) : max(val[u], idx);
    for (int i = 29; i >= 0; i--) {
        int b = (x >> i) & 1;
        if (!ch[u][b]) {
            ch[u][b] = ++nc;
            ch[nc][0] = ch[nc][1] = 0;
            val[nc] = type ? 1e9 : -1;
        }
        u = ch[u][b];
        val[u] = type ? min(val[u], idx) : max(val[u], idx);
    }
}

int qry(int x, int k, int type) {
    int u = 1, ans = type ? 1e9 : -1;
    for (int i = 29; i >= 0 && u; i--) {
        int bx = (x >> i) & 1, bk = (k >> i) & 1;
        if (bk) {
            int v = ch[u][bx];
            if (v) ans = type ? min(ans, val[v]) : max(ans, val[v]);
            u = ch[u][1 ^ bx];
        } else u = ch[u][bx];
    }
    return ans;
}

void push(int p) {
    if (lz[p]) {
        mn[p<<1] += lz[p]; lz[p<<1] += lz[p];
        mn[p<<1|1] += lz[p]; lz[p<<1|1] += lz[p];
        lz[p] = 0;
    }
}

void upd(int p, int l, int r, int ql, int qr, int v) {
    if (ql <= l && r <= qr) { mn[p] += v; lz[p] += v; return; }
    push(p); int m = (l + r) >> 1;
    if (ql <= m) upd(p<<1, l, m, ql, qr, v);
    if (qr > m) upd(p<<1|1, m + 1, r, ql, qr, v);
    mn[p] = min(mn[p<<1], mn[p<<1|1]);
}

int get_max(int p, int l, int r, int ql, int qr) {
    if (mn[p] > 0 || ql > r || qr < l) return -1;
    if (l == r) return l;
    push(p); int m = (l + r) >> 1;
    int res = get_max(p<<1|1, m + 1, r, ql, qr);
    return res != -1 ? res : get_max(p<<1, l, m, ql, qr);
}

int main() {
    int N, K;
    if (scanf("%d %d", &N, &K) != 2) return 0;
    for (int i = 1; i <= N; i++) scanf("%d", &A[i]);

    reset_trie(-1);
    for (int i = 1; i <= N; i++) { L[i] = qry(A[i], K, 0); ins(A[i], i, 0); }

    reset_trie(1e9);
    for (int i = N; i >= 1; i--) { R[i] = qry(A[i], K, 1); ins(A[i], i, 1); }

    memset(head_add, -1, sizeof(head_add));
    memset(head_rem, -1, sizeof(head_rem));

    for (int x = 1; x <= N; x++) {
        int st_i = L[x] == -1 ? 1 : L[x] + 1;
        int en_j = R[x] > N ? N : R[x] - 1;
        add_ev(st_i, x, en_j, 0);
        add_ev(x + 1, x, en_j, 1);
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int e = head_rem[i]; e != -1; e = nxt[e]) upd(1, 1, N, ev_l[e], ev_r[e], -1);
        for (int e = head_add[i]; e != -1; e = nxt[e]) upd(1, 1, N, ev_l[e], ev_r[e], 1);
        
        int j = get_max(1, 1, N, i, N);
        if (j != -1 && j - i + 1 > ans) ans = j - i + 1;
    }

    printf("%d\n", ans);
    return 0;
}