#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[10000];
    int tamanho;
}palavras;

int main(){

    int n, cont = 0, aux = 0, aux1 = 0;
    scanf("%d", &n);

    char frase[10000];
    char palavra[10000];
    palavras l[1000];
    palavras temp;

    for(int i = 0; i<n; i++){

        scanf(" %[^\n]", frase);

        int tamanho = strlen(frase);

        for(int j = 0; j<=tamanho; j++){
            
            if(frase[j] == ' ' || frase[j] == '\0'){
                
                for(int g = aux1; g<j; g++){
                    palavra[cont] = frase[g];
                    cont++;
                }
                palavra[cont] = '\0';
                aux1 = j + 1;

                strcpy(l[aux].nome, palavra);
                int tamanho2 = strlen(palavra);
                l[aux].tamanho = tamanho2;
                palavra[0] = '\0';
                aux++;
                cont = 0;
            }

        }

        for(int j = 0; j < aux - 1; j++){
            for(int g = 0; g < aux - 1; g++){
                if(l[g].tamanho > l[g + 1].tamanho){
                    temp = l[g];
                    l[g] =  l[g + 1];
                    l[g + 1] = temp; 
                }
            }
        }

        for(int j = aux - 1; j>=0; j--){
            printf("%s ", l[j].nome);
        }
        printf("\n");


        aux = 0;
        aux1 = 0;


    }




    
    
    
    
    
    
    
    
    
    return 0;
}
