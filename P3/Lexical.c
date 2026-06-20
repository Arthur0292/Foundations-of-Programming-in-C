#include <stdio.h>
#include <string.h>

int main(){

    char letras1[10000];
    char letras2[10000]; 

    int aux = 0;
    scanf("%s %s", letras1, letras2);

    if(strcmp(letras1,letras2) <= 0){
        printf("%s\n", letras1);
        printf("%s\n", letras2);
    }else{
        printf("%s\n", letras2);
        printf("%s\n", letras1);
    }
    


    return 0;
}
