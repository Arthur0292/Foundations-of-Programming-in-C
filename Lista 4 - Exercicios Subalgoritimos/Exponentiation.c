#include <stdio.h>

int elev(int a, int b){
    int r = 1;
    if(b == 0){
        return r;
    }
    for(int i = 0; i<b; i++){
        r*=a;
    }
    return r;
    
}

int main(){

    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(y < 0){
        while(y < 0){
        scanf("%d", &y);
        }
    }
    if(x == 0 && y == 0){
        while(x == 0 && y == 0){
            scanf("%d", &x);
            scanf("%d", &y);
        }
    }
    int resultado = elev(x, y);

    printf("%d\n", resultado);
    return 0;
}
