#include <stdio.h>

int main(){
    
    int y, x, n, soma = 0;
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
        scanf("%d %d", &x, &y);
        for(int i = 0; i<y; i++){
            if(x%2 == 0){
            x++;
            }
            soma += x;
            x += 2;
        }
        printf("%d\n", soma);
        soma = 0;
    }


    return 0;
}
