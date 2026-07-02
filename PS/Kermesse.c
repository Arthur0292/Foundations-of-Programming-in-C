#include <stdio.h>
#include <string.h>

int main() {

    int n, sorteado = 0, a, teste = 1;

    while(scanf("%d", &n) != 0){

        sorteado = 0;
        for(int i = 1; i<=n; i++){
            scanf("%d", &a);
            if(a == i){
                sorteado = i;
            }
        }
        printf("Teste %d\n", teste);
        printf("%d\n", sorteado);
        printf("\n");
        teste++;
    }

    return 0;
}
