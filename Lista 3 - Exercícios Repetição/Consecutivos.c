#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int array[n];
    int maior_sequencia = 1;
    int cont_atual = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);

        if (i > 0) {
            if (array[i] == array[i - 1]) {
                cont_atual++;
            } else {
                cont_atual = 1;
            }

            if (cont_atual > maior_sequencia) {
                maior_sequencia = cont_atual;
            }
        }
    }

    printf("%d\n", maior_sequencia);

    return 0;
}
