#include <stdio.h>

int main() {

    int n, par = 0, impar = 0, po = 0, ne = 0;

    for(int i = 1; i<=5; i++){
        scanf("%d", &n);
        if(n > 0){
            po++;
        }else if(n < 0){
            ne++;
        }
        if(n%2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", po);
    printf("%d valor(es) negativo(s)\n", ne);

    return 0;
}
