#include <stdio.h>

int main() {
    
    int n, x, y, soma = 0;
    scanf("%d", &n);
    
    for(int j = 0; j<n ;j++){
        scanf("%d", &x);
        scanf("%d", &y);
        
        if(x == y){
            soma = 0;
            printf("%d\n", soma);
        }else if(y>x){
            //caso o primeiro x for impar adiciona 1
            if(x%2 != 0){
                x = x + 1;
            }
            soma = 0;
            for(x; x<y; x++){
                if(x%2 != 0){
                    soma += x;
                }
            }
            printf("%d\n", soma);
        }else if(x>y){
            //caso o primeiro y for impar adiciona 1
            if(y%2 != 0){
                y = y + 1;
            }
            soma = 0;
            for(y; y<x; y++){
                if(y%2 != 0){
                    soma += y;
                }
            }
            printf("%d\n", soma);
        }
    }

    return 0;
}
