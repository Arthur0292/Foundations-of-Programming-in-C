#include <stdio.h>
#include <string.h>

int main() {

    int n;
    int linhas = 1;

    while(scanf("%d", &n) != EOF){
        int espacos = n/2;

        while(linhas <= n){
        for(int j = 0; j<espacos; j++){
            printf(" ");
        }
        for(int j = 0; j<linhas; j++){
            printf("*");
        }
        printf("\n");
        espacos -= 1;
        linhas += 2;
        }

        espacos = n/2;
        int linhastronco = 1;
        while(linhastronco < 4){
            for(int j = 0; j<espacos; j++){
            printf(" ");
            }
            for(int j = 0; j<linhastronco; j++){
            printf("*");
            }
            printf("\n");
            linhastronco += 2;
            espacos--;
        }

        printf("\n");
        espacos = 0;
        linhastronco = 1;
        linhas = 1;


    }


    return 0;
}
