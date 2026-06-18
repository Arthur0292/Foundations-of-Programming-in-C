#include <stdio.h>

int main(){
    
    int cont = 11;
    double matriz[12][12];
    char operacao;
    double soma = 0, media = 0;
    
    scanf("%c", &operacao);
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(int i = 1; i<6; i++){
            for(int j = 11; j>=cont; j--){
                soma+= matriz[i][j];
            }
            cont--;
        }
        cont = 7;
        for(int i = 6; i<=10; i++){
            for(int j = 11; j>=cont; j--){
                soma += matriz[i][j];
            }
            cont++;
        }

    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    }else{
        media = soma/30.0;
        printf("%.1lf", media);
    }

    





    return 0;
}
