#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[1000];
    int tamanho;
}lista;


int main() {

    int n, aux = 0, cont = 0, temp = 0; 
    char frase[10000];
    char palavra[1000];
    lista palavras[1000];
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf(" %[^\n]", frase);

        int tamanho = strlen(frase);

        for(int j = 0; j<=tamanho; j++){
            if(frase[j] == ' ' || frase[j] == '\0'){
                for(int k = aux; k<j; k++){
                    palavra[cont] = frase[k];
                    cont++;
                }

                aux = j + 1;
                palavra[cont] = '\0';

                int tamanho2 = strlen(palavra);

                cont = 0;

                strcpy(palavras[temp].nome, palavra);
                palavras[temp].tamanho = tamanho2;

                temp++;
            }
        }

        for(int j = 0; j<temp; j++){
            for(int k = 0; k < temp - 1 - j; k++){
                if(palavras[k].tamanho < palavras[k + 1].tamanho){
                    lista aux;
                    aux = palavras[k];
                    palavras[k] = palavras[k + 1];
                    palavras[k + 1] = aux;
                }
            }
        }


        for(int j = 0; j<temp; j++){
            printf("%s ", palavras[j].nome);
        }
        printf("\n");

        temp = 0;
        aux = 0;
        cont = 0;

    }
    
        

    return 0;
}
