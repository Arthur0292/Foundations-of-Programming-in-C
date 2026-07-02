#include <stdio.h>
#include <string.h>

int main() {

    char riso[10000];
    char palavra[1000];
    char palavraIn[1000];
    int cont = 0;

    scanf("%s", riso);

    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    int tamanho = strlen(riso);
    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j<5; j++){
            if(riso[i] == vogais[j]){
                palavra[cont] = vogais[j];
                cont++;
            }
        }
    }

    palavra[cont] = '\0';

    cont = 0;
    tamanho = strlen(palavra);
    for(int i = tamanho - 1; i >= 0; i--){
        palavraIn[cont] = palavra[i]; 
        cont++;
    }
    palavraIn[cont] = '\0';

    if(strcmp(palavra, palavraIn) == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
