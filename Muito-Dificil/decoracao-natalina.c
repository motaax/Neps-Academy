#include <stdio.h>
#include <string.h>

#define MAX_STATES 1600000

int pow3[14];
int dist[MAX_STATES];
int q[MAX_STATES];
int head = 0, tail = 0;

int encode(const char* s, int N) {
    int val = 0;
    for (int i = 0; i < N; ++i) {
        val += (s[i] - 'A') * pow3[i];
    }
    return val;
}

int main() {
    pow3[0] = 1;
    for (int i = 1; i <= 13; ++i) {
        pow3[i] = pow3[i - 1] * 3;
    }

    int N, Q;
    if (scanf("%d %d", &N, &Q) != 2) return 0;

    int total_states = pow3[N];
    
    memset(dist, -1, sizeof(int) * total_states);

    for (int a = 0; a <= N; ++a) {
        for (int b = 0; b <= N - a; ++b) {
            int c = N - a - b;
            
            int val = 0;
            int idx = 0;
            for (int i = 0; i < a; ++i) val += 0 * pow3[idx++];
            for (int i = 0; i < b; ++i) val += 1 * pow3[idx++];
            for (int i = 0; i < c; ++i) val += 2 * pow3[idx++];
            
            dist[val] = 0;
            q[tail++] = val;
        }
    }

    int arr[13];
    while (head < tail) {
        int curr = q[head++];
        int d = dist[curr];

        int temp = curr;
        for (int i = 0; i < N; ++i) {
            arr[i] = temp % 3;
            temp /= 3;
        }

        for (int k = 2; k <= N; ++k) {
            int orig_pref = curr % pow3[k];
            int new_pref = 0;
            for (int i = 0; i < k; ++i) {
                new_pref += arr[i] * pow3[k - 1 - i];
            }
            
            int next_code = curr - orig_pref + new_pref;

            if (dist[next_code] == -1) {
                dist[next_code] = d + 1;
                q[tail++] = next_code;
            }
        }
    }

    char s[15];
    for (int i = 0; i < Q; ++i) {
        scanf("%s", s);
        printf("%d\n", dist[encode(s, N)]);
    }

    return 0;
}