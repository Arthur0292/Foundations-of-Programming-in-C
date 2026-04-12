#include <stdio.h>

int main() {
    int n, x, y = 1;

    scanf("%d %d", &x, &n);

    while (y <= n) {
        for (int j = 0; j < x; j++) {
            if (y <= n) {
                printf("%d", y);
                if (j < x - 1 && y < n) {
                    printf(" ");
                }
                y++;
            }
        }
        printf("\n");
    }

    return 0;
}
