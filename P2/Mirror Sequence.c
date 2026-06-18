#include <stdio.h>
#include <string.h>

int main(){

    char numero[10000];
    int a, b, n, tamanho;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d %d", &a, &b);

        numero[0] = '\0';

        for(int j = a; j<=b; j++){
            int fim = strlen(numero);
            sprintf(&numero[fim], "%d", j);
        }
        printf("%s", numero);

        tamanho = strlen(numero);
        for(int j = tamanho - 1; j>=0; j--){
            printf("%c", numero[j]);
        }
        printf("\n");


    }




    return 0;
}
