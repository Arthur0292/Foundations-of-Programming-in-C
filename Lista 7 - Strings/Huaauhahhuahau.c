#include <stdio.h>
#include <string.h>

int main() {

    char riso[10000];
    int cont = 0, cont1 = 0;
    char vogais[10000], vogaisIn[10000];

    scanf("%s", riso);

    int tamanho = strlen(riso);

    char letras[5] = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j<5; j++){
            if(riso[i] == letras[j]){
                vogais[cont] = riso[i];
                cont++;
            }
        }
    }
    vogais[cont] = '\0';

    for(int i = cont - 1; i >= 0 ; i--){
        vogaisIn[cont1] = vogais[i];
        cont1++;
    }

    vogaisIn[cont1] = '\0';

    if(strcmp(vogaisIn, vogais) == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }




    return 0;
}
