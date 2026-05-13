#include <stdio.h>

int main(){
    
    int x, n, atual, definitivo, posicao;
    int array[5];
   
    while(scanf("%d", &x) == 1 && x != 0){

        for(int i = 0; i < x; i++){
            definitivo = 0; 
            
            for(int j = 0; j < 5; j++){
                scanf("%d", &n);
                array[j] = n;
                
                if(n <= 127){
                    definitivo++;
                    posicao = j;
                }
            }

            if(definitivo != 1){
                printf("*\n");
            }else{
                if(posicao == 0) printf("A\n");
                else if(posicao == 1) printf("B\n");
                else if(posicao == 2) printf("C\n");
                else if(posicao == 3) printf("D\n");
                else if(posicao == 4) printf("E\n");
            }
        }
    }

    return 0;
}
