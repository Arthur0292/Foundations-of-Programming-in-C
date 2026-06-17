#include <stdio.h>

int main(){

    int linhas, colunas, n, maior = 0, atual = 0;
    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            scanf("%d", &n);
            matriz[i][j] = n;
        }
    }

    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            atual += matriz[i][j];  
        }
        if(atual > maior){
            maior = atual;
        }
        atual = 0;
    }

    for(int i = 0; i<colunas; i++){
        for(int j = 0; j<linhas; j++){
            atual += matriz[j][i]; 
        }
        if(atual > maior){
            maior = atual;
        }
        atual = 0;

    }

    printf("%d\n", maior);


    return 0;
}
