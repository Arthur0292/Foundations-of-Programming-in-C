#include <stdio.h>

int main(){

    int pessoas[5];
    int cont = 0;

    for(int i = 0; i<5; i++){
        scanf("%d", &pessoas[i]);
    }

    cont += pessoas[0] * 300;
    cont += pessoas[1] * 1500;
    cont += pessoas[2] * 600;
    cont += pessoas[3] * 1000;
    cont += pessoas[4] * 150;
    cont += 225;

    printf("%d\n", cont);



    return 0;
}
