#include <stdio.h>

int main() {
    int n = 7; 
    int u0 = 0, u1 = 1, next;

    printf("fibonacci U%d :\n", n);

    if (n >= 0)
        printf("%d", u0);
    if (n >= 1)
        printf(", %d", u1);

    for (int i = 2; i <= n; i++) {
        next = u0 + u1;
        printf(", %d", next);
        u0 = u1;
        u1 = next;
    }

    printf("\n");
    return 0;
}
