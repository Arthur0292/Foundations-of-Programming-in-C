#include <stdio.h>
#include <string.h>

int main(){

    char letra;
    char alfa[27];
    for(int i = 0; i<27; i++){
        alfa[i] = 'A' + i;
    }
    alfa[27] = '\0';

    scanf("%c", &letra);
    for(int i = 0; i<27; i++){
        if(letra == alfa[i]){
            printf("%d\n", i + 1);
        }
    }

    return 0;
}
