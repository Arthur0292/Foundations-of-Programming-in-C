#include <stdio.h>

int main(){

    int l, c, maior = 0, atual = 0;
    scanf("%d %d", &l, &c);
    int matriz[l][c];

    for(int i = 0; i<l; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i<l; i++){
        atual = 0;
        for(int j = 0; j<c; j++){
            atual+= matriz[i][j];
        }
        if(atual > maior){
            maior = atual;
        }
    }

    for(int i = 0; i<c; i++){
        atual = 0;
        for(int j = 0; j<l; j++){
            atual+= matriz[j][i];
        }
        if(atual > maior){
            maior = atual;
        }
    }

    printf("%d\n", maior);





    return 0;
}
