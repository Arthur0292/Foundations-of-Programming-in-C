#include <stdio.h>
#include <string.h>

int main(){
   
   int n, tamanho, cont = 0;
   scanf("%d", &n);
   char frase[52];
   char frase2[52];

   for(int i = 0; i<n; i++){
        scanf(" %[^\n]", frase);
        tamanho = strlen(frase);
        for(int j = 0; j<tamanho; j++){
            if(j == 0 && frase[0] >= 'a' && frase[0] <= 'z'){
                frase2[cont] = frase[0];
                cont++;
            }else if( j != 0 && frase[j] >= 'a' && frase[j] <= 'z' && frase[j - 1] == ' '){
                frase2[cont] = frase[j];
                cont++;
            }
        }

        frase2[cont] = '\0';
        printf("%s\n", frase2);
        cont = 0;
   }


    return 0;
}
