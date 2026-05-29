#include <stdio.h>
#include <string.h>

int main(){
    int n, tamanho, correto = 1, num, ultimo;
    scanf("%d", &n);
    char placa[9];

    for(int i = 0; i<n; i++){
        scanf("%s", placa);
        tamanho = strlen(placa);
        if(tamanho > 8 || tamanho < 8){
            correto = 0;
        }else{
            for(int j = 0; j<3; j++){
                if(placa[j] < 65 || placa[j] > 90){
                    correto = 0;
                }
            }
            if(placa[3] != 45){
                correto = 0;
            }
            for(int j = 4; j<8; j++){
                num = placa[j] - '0';
                if(num > 10 || num < 0){
                    correto = 0;
                }
            }

        }
        
        ultimo = placa[7] - '0';

        if(correto == 1){
            if(ultimo == 1 || ultimo == 2){
                printf("MONDAY\n");
            }else if(ultimo == 3 || ultimo == 4){
                printf("TUESDAY\n");
            }else if(ultimo == 5 || ultimo == 6){
                printf("WEDNESDAY\n");
            }else if(ultimo == 7 || ultimo == 8){
                printf("THURSDAY\n");
            }else{
                printf("FRIDAY\n");
            }
        }else{
            printf("FAILURE\n");
        }
        correto = 1;
    }

    return 0;
}
