#include <stdio.h>

int main() {
    
    int x, y, soma = 0;

        scanf("%d", &x);
        scanf("%d", &y);

        while((x != 0) || (y != 0)){
            if(x>y){
                for(y; y<=x; y++){
                    printf("%d", y);
                    printf(" ");
                    soma += y;
                }
                printf("Sum=%d\n", soma);
                scanf("%d", &x);
                scanf("%d", &y);
            }else if(y>x){
                for(x; x<=y; x++){
                    printf("%d", x);
                    printf(" ");
                    soma += x;
                }
                printf("Sum=%d\n", soma);
                scanf("%d", &x);
                scanf("%d", &y);
            }
        }
        
        

    return 0;
}
