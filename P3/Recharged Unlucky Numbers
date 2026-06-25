#include <stdio.h>
#include <string.h>

int main(){

  
    char numero[10000];
    scanf("%s", numero);
    int masorte = 0;

    int tamanho = strlen(numero);

    for(int i = 0; i < tamanho - 1; i++){
        if(numero[i] == '1' && numero[i + 1] == '3'){
            masorte++;
            break;
        }
    } 

    if(masorte > 0){
        printf("%s es de Mala Suerte\n", numero);
    }else{
        printf("%s NO es de Mala Suerte\n", numero);
    }
    
    
    
    return 0;
}
