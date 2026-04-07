#include <stdio.h>

int main(){

    int n, alcool = 0, gasolina = 0, diesel = 0;
    printf("1. Álcool 2. Gasolina 3. Diesel 4. Fim\n");
    scanf("%d", &n);

    while(n != 4){
        if(n == 1){
            alcool ++;
        }else if(n == 2){
            gasolina++;
        }if(n == 3){
            diesel++;
        }
        scanf("%d", &n);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);


    return 0;
}
