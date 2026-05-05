#include <stdio.h>
#include <string.h>

int main() {
    char s[55], v[55];
    scanf("%s", s);

    int k = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            v[k++] = s[i];
        }
    }

    int ok = 1;
    for(int i = 0; i < k/2; i++) {
        if(v[i] != v[k-1-i]) {
            ok = 0;
            break;
        }
    }

    if(ok) printf("S\n");
    else printf("N\n");

    return 0;
}