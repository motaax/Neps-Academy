#include <stdio.h>

int main() {
    int n, m, d, y, t;
    int md[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (scanf("%d", &n) != 1) return 0;
    
    while (n-- && scanf("%d/%d/%d %d", &m, &d, &y, &t) == 4) {
        
        while (t--) {
            d++; 
            
            int bissexto = (m == 2 && y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
            
            if (d > md[m] + bissexto) {
                d = 1;
                if (++m > 12) { 
                    m = 1; 
                    y++; 
                }
            }
        }
        
        printf("%02d/%02d/%04d\n", m, d, y);
    }
    
    return 0;
}