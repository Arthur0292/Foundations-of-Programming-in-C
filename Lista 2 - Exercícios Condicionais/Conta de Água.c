#include <stdio.h>

int main() {

    int n, fixo = 7, valor;
    scanf("%d", &n);

    if(n < 10){
        printf("%d\n", fixo);
    }else if(n < 30){
        n -= 10;
        valor = fixo + n;
        
        printf("%d\n", valor);
    }else if(n < 100){
        n -= 30;
        n *= 2;
        
        valor = fixo + 20 + n;
        printf("%d\n", valor);
    }else{
        n -=100;
        n *= 5;

        valor = fixo + 20 + 140 + n;
        printf("%d\n", valor);
    }

return 0;

}


 







