#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char j1[100], j2[100];
    scanf("%d", &n);


    for(int i = 0; i<n; i++){
        scanf("%s %s", j1, j2);
            if(strcmp(j1, "ataque") == 0){
                if(strcmp(j2, "pedra") == 0){
                    printf("Jogador 1 venceu\n");
                }else if(strcmp(j2, "papel") == 0){
                    printf("Jogador 1 venceu\n");
                }else if(strcmp(j2, "ataque") == 0){
                    printf("Aniquilacao mutua\n");
                }


            }else if(strcmp(j1, "pedra") == 0){
                if(strcmp(j2, "ataque") == 0){
                    printf("Jogador 2 venceu\n");
                }else if(strcmp(j2, "papel") == 0){
                    printf("Jogador 1 venceu\n");
                }else if(strcmp(j2, "pedra") == 0){
                    printf("Sem ganhador\n");
                }


            }else if(strcmp(j1, "papel") == 0){
                if(strcmp(j2, "pedra") == 0){
                    printf("Jogador 2 venceu\n");
                }else  if(strcmp(j2, "ataque") == 0){
                    printf("Jogador 2 venceu\n");
                }else if(strcmp(j2, "papel") == 0){
                    printf("Ambos venceram\n");
                }
            }
    }

    return 0;
}
