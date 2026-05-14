#include <stdio.h>

int main(){
    
    int x, soma = 0;
    scanf("%d", &x);

    while(x != 0){

    for(int i = 0; i<5; i++){
        if(x%2 != 0){
            x++;
        }
        soma += x;
        x += 2;
    }

    printf("%d\n", soma);
    soma = 0;
    scanf("%d", &x);
    }
    
    


    return 0;
}
