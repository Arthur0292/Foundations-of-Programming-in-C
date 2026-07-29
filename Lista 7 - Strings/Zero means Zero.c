#include <stdio.h>
#include <string.h>

int main(){

    int a, b, soma, cont = 0;
    char numero[10000];
    char novonumero[10000];

    scanf("%d %d", &a, &b);
    
    while(a != 0 && b != 0){
        
        soma = a + b;

        sprintf(numero, "%d", soma);

        int tamanho = strlen(numero);

        for(int i = 0; i<tamanho; i++){
            if(numero[i] != '0'){
                novonumero[cont] = numero[i];
                cont++;
            }
        }

        novonumero[cont] = '\0';

        printf("%s\n", novonumero);

        cont = 0;
        novonumero[cont] = '\0';

        scanf("%d %d", &a, &b);
    }

    return 0;
}
