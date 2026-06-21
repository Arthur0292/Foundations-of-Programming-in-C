#include <stdio.h>
#include <string.h>

typedef struct {
    int ascii;
    int qtd;
} Frequencia;

int main() {
    char string[1001];
    int tamanho;
    int caracteres[256];
    int primeiro = 1;

    while (scanf("%[^\n]", string) != EOF) {
        getchar();
        tamanho = strlen(string);

        if (primeiro != 1) {
            printf("\n");
        } else {
            primeiro = 0;
        }

        for (int i = 0; i < 256; i++) {
            caracteres[i] = 0;
        }

        for (int i = 0; i < tamanho; i++) {
            char caracter = string[i];
            caracteres[caracter]++;
        }

        Frequencia lista[256];
        int total_diferentes = 0;

        for (int i = 0; i < 256; i++) {
            if (caracteres[i] > 0) {
                lista[total_diferentes].ascii = i;
                lista[total_diferentes].qtd = caracteres[i];
                total_diferentes++;
            }
        }

        for (int i = 0; i < total_diferentes - 1; i++) {
            for (int j = 0; j < total_diferentes - i - 1; j++) {
                if ((lista[j].qtd > lista[j + 1].qtd) || 
                    (lista[j].qtd == lista[j + 1].qtd && lista[j].ascii < lista[j + 1].ascii)) {
                    Frequencia temp = lista[j];
                    lista[j] = lista[j + 1];
                    lista[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < total_diferentes; i++) {
            printf("%d %d\n", lista[i].ascii, lista[i].qtd);
        }
    }

    return 0;
}
