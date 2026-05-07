#include <stdio.h>

int main() {
    int n = 1, y, ganhador, teste = 1;

    scanf("%d", &n);
    while(n != 0 ){
        for(int i = 1; i<=n; i++){
            scanf("%d", &y);
            if(y == i){
                ganhador = y;
            }
        }
        
        printf("Teste %d\n", teste);
        printf("%d\n", ganhador);
        printf("\n");
        teste ++;

        scanf("%d", &n);
    }

return 0;

}


 







