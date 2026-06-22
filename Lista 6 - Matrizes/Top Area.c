#include <stdio.h>

int main() {
    char operacao;
    double m[12][12];
    double soma = 0.0;
    int cont = 0;

    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j <= 10 - i; j++) {
            soma += m[i][j];
            cont++;
        }
    }

    if (operacao == 'M') {
        printf("%.1f\n", soma / cont);
    } else {
        printf("%.1f\n", soma);
    }

    return 0;
}
