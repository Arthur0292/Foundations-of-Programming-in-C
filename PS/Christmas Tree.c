#include <stdio.h>
#include <string.h>

int main() {

    int n, espacos, espacosT; 
    
    while(scanf("%d", &n) != EOF){
        int pontos = 1;
        espacos = n/2;

        while(pontos <= n){
            for(int i = 0; i<espacos; i++){
            printf(" ");
        }
        for(int i = 0; i<pontos; i++){
            printf("*");
        }
        for(int i = 0; i<espacos; i++){
            printf(" ");
        }
        printf("\n");
        pontos += 2;
        espacos-= 1;
        }
        
        pontos = 1;
        espacosT = n/2;
        while(pontos <= 3){
            
            
            for(int i = 0; i<espacosT; i++){
                printf(" ");
            }
            for(int i = 0; i<pontos; i++){
            printf("*");
            }
            for(int i = 0; i<espacosT; i++){
                printf(" ");
            }
            printf("\n");
            espacosT--;
            pontos += 2;
        }
        
    }

    return 0;
}
