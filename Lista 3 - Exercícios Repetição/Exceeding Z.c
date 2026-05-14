#include <stdio.h>

int main(){
    
    int x, y, soma = 0, contador = 0;

    scanf("%d", &x);
    scanf("%d", &y);
    while(y <= x){
        scanf("%d", &y);
    }

    while(soma <= y){
        soma += x;
        x++;
        contador++;
    }

    printf("%d\n", contador);

    return 0;
}
