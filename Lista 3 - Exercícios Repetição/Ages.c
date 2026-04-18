#include <stdio.h>

int main() {
    int x = 0, n = 0, soma = 0;
    double media;

    while (1) {
        scanf("%d", &x);

        if (x < 0) {
            break;
        }

        soma += x;
        n++;
    }

    if (n > 0) {
        media = (double)soma / n;
        printf("%.2lf\n", media);
    }

    return 0;
}
