#include <stdio.h>
#include <string.h>

int main(){
    int n, x, y, resultado = 0;
    char letra[4];
    char num1;
    char num2;
    char caracter;
    scanf("%d", &n);


    for(int i = 0; i<n; i++){
        scanf("%s", letra);
        num1 = letra[0];
        num2 = letra[2];
        caracter = letra[1];
        x = num1 - '0';
        y = num2 - '0';
        
        if(x == y){
            resultado = x * y;
        }else{
        if((caracter >= 65) && (caracter <= 90)){
            resultado = y - x;
        }else if((caracter >= 97) && (caracter <= 122)){
            resultado = x + y;
        }
        }
        printf("%d\n", resultado);
    }


    return 0;
}
