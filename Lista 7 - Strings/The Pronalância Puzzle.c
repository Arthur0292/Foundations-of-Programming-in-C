#include <stdio.h>
#include <string.h>

int main(){

    int tamanho, cont = 0;
    char numero[1001];
    char numeroIn[1001];

    scanf("%s", numero);

    tamanho = strlen(numero);

    for(int i = tamanho - 1; i >= 0; i--){
        numeroIn[cont] = numero[i];
        cont++;
    }

    numeroIn[cont] = '\0';

    printf("%s\n", numeroIn);

    return 0;
}
