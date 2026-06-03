#include <stdio.h>
#include <string.h>

int main(){
   
    char numero[3];
    char numeroI[3];
    int cont = 0; 

    scanf("%s", numero);
    

    for(int i = 2; i >= 0; i--){
        numeroI[cont] = numero[i];
        cont++;
    }
    
    numeroI[cont] = '\0';

    printf("Invertido = %s\n", numeroI);
    return 0;
}
