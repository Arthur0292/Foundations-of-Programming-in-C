#include <stdio.h>

int main() {

    int n, soma = 0;

    for(int i = 1; i<=5; i ++){
        scanf("%d", &n);
        if(n%2 == 0){
            soma ++;
        }
    }
    
    printf("%d valores pares\n", soma);
    return 0;
}
