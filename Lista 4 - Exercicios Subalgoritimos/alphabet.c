#include <stdio.h>

void retornaLetras(char letras[27], int x){
    for(int i = 0; i<x; i++){
        if(i != (x - 1)){
            printf("%c ", letras[i]);
        }else{
            printf("%c\n", letras[i]);
        }
    }
}


int main(){

    int n;
    scanf("%d", &n);

    if(n > 26 || n < 1){
        printf("Pode não\n");
        return 0;
    }

    char alfabeto[27];
    for(int i = 0; i<26; i++){
        alfabeto[i] = 'A' + i;
    }

    alfabeto[26] = '\0';

    retornaLetras(alfabeto, n);


    return 0;
}
