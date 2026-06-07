#include <stdio.h>
#include <string.h>

int main(){
    
    int n = 1, x = 1, y, tamanho, tamanho2, cont = 0, diferente = 0;
    char caracter[2];
    char numero[10000];
    char novonumero[10000];
    char novonumero2[10000];

    scanf("%c %s", caracter, numero);
    while(caracter[0] != "0" && strcmp(numero, "0") != 0){

        tamanho = strlen(numero);


        for(int i = 0; i<tamanho; i++){
            if(numero[i] != caracter[0]){
                novonumero[cont] = numero[i];
                cont++;
            }
        }
        
        if(cont == 0){
            novonumero[cont] = '0';
            cont++;
        }
        novonumero[cont] = '\0';
        tamanho = strlen(novonumero);

        for(int i = 0; i<tamanho; i++){
            if(novonumero[i] != '0'){
                y = i;
                diferente = 1;
                break;
            }
        }

        if(diferente == 1){
            for(y; y<tamanho; y++){
                printf("%c", novonumero[y]);
            }
            printf("\n");
        }else{
            printf("0\n");
        }

        cont = 0;
        diferente = 0;

        scanf(" %c %s", caracter, numero);
        





    }


    


    return 0;
}
