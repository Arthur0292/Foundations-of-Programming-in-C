#include <stdio.h>


int main(){

    double matriz[12][12];
    char operacao[2];
    double numero, soma = 0, media;
    int l;

    scanf("%d", &l);
    scanf(" %c", &operacao[0]);


    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    if(operacao[0] == 'S'){
        for(int i = 0; i<12; i++){
            soma += matriz[l][i];
        }
        printf("%.1lf\n", soma);
    }else if(operacao[0] == 'M'){
        for(int i = 0; i<12; i++){
            soma += matriz[l][i];
        }
        media = soma/12.0;
        printf("%.1lf\n", media);
    }




    return 0;
}
