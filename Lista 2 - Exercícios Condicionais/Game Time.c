#include <stdio.h>

int main(){
    
    int inicio, final, tempo;

    scanf("%d %d", &inicio, &final);

    if(inicio < final){
        tempo = final - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }else{
        tempo = (final + 24) - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
    return 0;
}
