#include <stdio.h>
#include <string.h>

int main(){
   
   int n, tamanho, soma = 0, caracter;
   scanf("%d", &n);

   char numero[1000000];

   for(int j = 0; j<n; j++){
      scanf("%s", numero);
      tamanho = strlen(numero);

      for(int i = 0; i<tamanho; i++){
         caracter = numero[i] - '0';
      if(caracter == 1){
         soma += 2;
      }else if(caracter == 2){
         soma += 5;
      }else if(caracter == 3){
         soma += 5;
      }else if(caracter == 4){
         soma += 4;
      }else if(caracter == 5){
         soma += 5;
      }else if(caracter == 6){
         soma += 6;
      }else if(caracter == 7){
         soma += 3;
      }else if(caracter == 8){
         soma += 7;
      }else if(caracter == 9){
         soma += 6;
      }else if(caracter == 0){
         soma += 6;
      }
   }
  
   printf("%d leds\n", soma);
   soma = 0;
  
}





    return 0;
}
