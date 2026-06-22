#include <stdio.h>

int main() {
    char operacao;
    double m[12][12];
    double resultado = 0.0;
    int cont = 0;

    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i + j < 11) {
                resultado += m[i][j];
                cont++;
            }
        }
    }

    if (operacao == 'M') {
        resultado /= cont;
    }

    printf("%.1f\n", resultado);

    return 0;
}
