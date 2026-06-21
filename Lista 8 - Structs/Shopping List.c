#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[101];
}lista;

int main(){

    int n, cont = 0, aux = 0, temp = 0, cont2 = 0;
    char produtos[10000];
    char unidade[101];
    lista compra[1000];
    lista compra2[1000];

    scanf("%d", &n);

    for(int j = 0; j<n; j++){

        cont = 0; aux = 0; temp = 0; cont2 = 0;

        
        scanf(" %[^\n]", produtos);

        int tamanho = strlen(produtos);

        for(int i = 0; i<tamanho; i++){
            if(produtos[i] == ' ' || i == tamanho - 1){
                
                for(int j = aux; j<i; j++){
                    unidade[temp] = produtos[j];
                    temp++;
                }
                
                if(i == tamanho - 1 && produtos[i] != ' '){
                    unidade[temp] = produtos[i];
                    temp++;
                }

                unidade[temp] = '\0';
                
                strcpy(compra[cont].nome, unidade);
                unidade[0] = '\0';
                
                temp = 0;
                cont++;
                aux = i + 1;
            }
        }

    for (int i = 0; i < cont - 1; i++) {
    for (int k = 0; k < cont - i - 1; k++) {
        if (strcmp(compra[k].nome, compra[k + 1].nome) > 0) {
            lista temp_struct = compra[k];
            compra[k] = compra[k + 1];
            compra[k + 1] = temp_struct;
        }
    }
    }

    if(cont > 0){

        strcpy(compra2[cont2].nome, compra[0].nome);
        cont2++;

        for (int i = 1; i < cont; i++) {
        if (strcmp(compra[i].nome, compra[i - 1].nome) != 0) {
            strcpy(compra2[cont2].nome, compra[i].nome);
            cont2++;
        }
        }

    }
    
    for(int i = 0; i<cont2; i++){
        if (i == 0) printf("%s", compra2[i].nome);
        else printf(" %s", compra2[i].nome);
    }
    printf("\n");

    }

    return 0;
}
