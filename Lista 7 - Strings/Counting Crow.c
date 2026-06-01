#include <stdio.h>
#include <string.h>

int main(){
   
   int soma = 0, bin, cont = 0, gritos = 0;
   int array[3] = {1, 2, 4};
   char string[9];

   
    while(gritos < 3){
        scanf(" %[^\n]",string);
        
        if(strcmp(string, "caw caw") == 0){
            gritos++;
            printf("%d\n", soma);
            soma = 0;
        }else{
        for(int i = 0; i<3; i++){
            if(string[i] == '-'){
                string[i] = '0';
            }else if(string[i] == '*'){
                string[i] = '1';
            }
        }

        for(int j = 2; j >= 0; j--){
            bin = string[j] - '0';
            soma += bin * array[cont];
            cont++;
        }
        cont = 0;
        }

    }

    return 0;
}
