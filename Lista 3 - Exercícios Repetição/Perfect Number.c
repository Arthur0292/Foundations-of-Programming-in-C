#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        scanf("%d", &x);

        if (x <= 1) {
            printf("%d nao eh perfeito\n", x);
            continue;
        }

        int soma = 1;
        int y = (int)sqrt(x);

        for (int i = 2; i <= y; i++) {
            if (x % i == 0) {
                soma += i;
                if (i != x / i) {
                    soma += x / i;
                }
            }
        }

        if (soma == x) {
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }
    }

    return 0;
}
