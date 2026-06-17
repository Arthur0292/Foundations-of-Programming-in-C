#include <stdio.h>

typedef struct{
    char nome[20];
    int preco;
}produto;

void bubble_sort (produto vetor[], int n) {
    int k, j;
    produto aux;

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - k; j++) {

            if (vetor[j].preco > vetor[j + 1].preco) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        produto carne[n];

    for(int i = 0; i<n; i++){
        scanf("%s", carne[i].nome);
        scanf("%d", &carne[i].preco);
    }

    bubble_sort(carne, n);

    for(int i = 0; i<n; i++){
        printf("%s", carne[i].nome);
        if(i != n - 1){
            printf(" ");
        }
    }
    printf("\n");
    
}

   





    return 0;
}
