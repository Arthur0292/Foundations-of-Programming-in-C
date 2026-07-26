#include <stdio.h>
#include <string.h>

int main(){

    int n, diferenca = 0;
    char um[4] = "one";
    char dois[4] = "two";
    char tres[6] = "three";
    char palavra[100];
    
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%s", palavra);
        int tamanho = strlen(palavra);

        if(tamanho == 3){
            for(int j = 0; j<3; j++){
                if(dois[j] != palavra[j]){
                    diferenca++;
                }
            }
            if(diferenca <= 1){
                printf("2\n");
            }else{
                diferenca = 0;
                for(int j = 0; j<3; j++){
                    if(um[j] != palavra[j]){
                        diferenca++;
                    }
                }
                if(diferenca <= 1){
                    printf("1\n");
                }
            }

        }else{
            for(int j = 0; j<5; j++){
                if(tres[j] != palavra[j]){
                    diferenca++;
                }
            }
            if(diferenca <= 1){
                printf("3\n");
            }
        }

        diferenca = 0;

    }

    return 0;
}
