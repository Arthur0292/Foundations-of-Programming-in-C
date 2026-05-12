#include <stdio.h>

int main() {
    
    int x, n, posicao, menor;
    scanf("%d", &x);

    for(int i = 0; i<x; i++){
        scanf("%d", &n);
        if(i == 0){
            menor = n;
            posicao = i;
        }

        if(n < menor){
            menor = n;
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}
