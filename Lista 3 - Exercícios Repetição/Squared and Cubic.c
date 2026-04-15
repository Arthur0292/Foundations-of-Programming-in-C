#include <stdio.h>

int main(){
    int x, n, cubo, quadrado;

    scanf("%d", &x);
    for(int i = 1; i<=x; i++){
        printf("%d", i);
        quadrado = i * i;
        printf(" ");
        printf("%d", quadrado);
        cubo = i * i * i;
        printf(" ");
        printf("%d\n", cubo);
    }

    return 0;
}
