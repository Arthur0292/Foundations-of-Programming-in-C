#include <stdio.h>
#include <string.h>

int main(){

    char frase[10000];
    char novaFrase[10000];
    int diferente = 0, cont = 0;
    scanf("%[^\n]", frase);

    int tamanho = strlen(frase);

    for(int i = tamanho - 1; i >= 0; i--){
        novaFrase[cont] = frase[i];
        cont++;
    }

    novaFrase[cont] = '\0';

    for(int i = 0; i<tamanho; i++){
        if(novaFrase[i] != frase[i]){
            diferente++;
        }
    }

    if(diferente == 0){
        printf("A frase [%s] eh palindrome\n", frase);
    }else{
        printf("A frase [%s] nao eh palindrome\n", frase);
    }



    return 0;
}
