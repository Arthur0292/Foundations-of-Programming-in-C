#include <stdio.h>
#include <string.h>

int main(){
   
   char frase[51];
   char alfabetoMa[27];
   char alfabetoMi[27];
   int tamanho, aux, cont = 0;

   for(int i = 0; i<26; i++){
        alfabetoMi[i] = 'a'+ i;
        alfabetoMa[i] = 'A' + i;
    }
    alfabetoMi[26] = '\0';
    alfabetoMa[26] = '\0';

   while(scanf("%[^\n]%*c", frase) != EOF){
    tamanho = strlen(frase);

    for(int i = 0; i < tamanho; i++){
      if(frase[i] != 32){
         if(cont % 2 == 0){
            if(frase[i] >= 'a' && frase[i] <= 'z'){
               for(int j = 0; j<26; j++){
                  if(alfabetoMi[j] == frase[i]){
                     aux = j;
                  }
               }
               frase[i] = alfabetoMa[aux];
            }
         } else {
            if(frase[i] >= 'A' && frase[i] <= 'Z'){
               for(int j = 0; j<26; j++){
                  if(alfabetoMa[j] == frase[i]){
                     aux = j;
                  }
               }
               frase[i] = alfabetoMi[aux];
            }
         }
         cont++;
      }
    }

    printf("%s\n", frase);
    cont = 0;
   }

    return 0;
}
