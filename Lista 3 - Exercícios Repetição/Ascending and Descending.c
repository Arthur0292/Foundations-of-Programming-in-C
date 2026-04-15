#include <stdio.h>

int main(){
    int x, n;
    scanf("%d %d", &x, &n);

    while(x != n){
        if(x>n){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
        scanf("%d %d", &x, &n);
    }

    return 0;
}
