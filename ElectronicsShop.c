#include <stdio.h>
int main() {
    int b, n, m;
    scanf("%d", &b);
    scanf("%d", &n);
    scanf("%d", &m);
    int c[n], s[m];
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &s[i]);
    }
    int k = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int t = c[i] + s[j];
            if (t <= b && t> k) {
                k = t;
            }
        }
    }
    printf("%d", k);
}
