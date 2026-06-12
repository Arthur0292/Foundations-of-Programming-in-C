#include <stdio.h>

int main(){

    int salto, n, altura, aux, r = 0;
    scanf("%d %d", &salto, &n);
    
    int plataforma[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &altura);
        if(i == 0){
            plataforma[i] = altura;
        }else{
            plataforma[i] = altura;
            if(plataforma[i] > plataforma[i -1]){
                aux = plataforma[i] - plataforma[i - 1];
                    if(aux > salto){
                        r++;
                    }
                    aux = 0;
                
            }else{
                aux = plataforma[i -1] - plataforma[i];
                if(aux > salto){
                        r++;
                    }
                aux = 0;
            }
        }
    }

    if(r == 0){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }

    return 0;
}
