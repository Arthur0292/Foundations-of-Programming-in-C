#include <stdio.h>

int main() {

    int n;
    int preco[100];
    scanf("%d", &n);

    for (int l = 0; l < n; l++) {

        int d, i, b;
        scanf("%d %d %d", &d, &i, &b);

        for (int j = 0; j < i; j++) {
            scanf("%d", &preco[j]);
        }

        int maior = 0;

        for (int k = 0; k < b; k++) {

            int Q;
            scanf("%d", &Q);

            int custo = 0;

            for (int j = 0; j < Q; j++) {
                int indice, quantidade;
                scanf("%d %d", &indice, &quantidade);

                custo += preco[indice] * quantidade;
            }

            int bolos = d / custo;

            if (bolos > maior) {
                maior = bolos;
            }
        }

        printf("%d\n", maior);
    }

    return 0;
}
