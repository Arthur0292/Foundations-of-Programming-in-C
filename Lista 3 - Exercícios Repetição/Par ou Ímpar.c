#include <stdio.h>

int main() {
    int n, par, impar, teste = 1;
    char p1[10], p2[10];

    scanf("%d", &n);
    while(n != 0){
        scanf("%s %s", p1, p2);
        printf("Teste %d\n", teste);
        for(int j = 0; j<n; j++){
            scanf("%d %d", &par, &impar);
            if((par + impar)%2 == 0){
                printf("%s\n", p1);
            }else{
                printf("%s\n", p2);
            }
        }
        printf("\n");
        scanf("%d", &n);
        teste++;

    }
    
return 0;

}


 







