#include <stdio.h>

int main() {
    int novo;

    do {
        int validas = 0;
        double soma = 0, nota;

        while (validas < 2) {
            scanf("%lf", &nota);
            if (nota >= 0 && nota <= 10) {
                soma += nota;
                validas++;
            } else {
                printf("nota invalida\n");
            }
        }

        printf("media = %.2f\n", soma / 2.0);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &novo);
        } while (novo != 1 && novo != 2);

    } while (novo != 2);

    return 0;
}
