#include <stdio.h>

int main() {

    double n;
    int soma = 0;

    for(int i = 1; i <= 6; i ++){
        scanf("%lf", &n);
        if(n > 0){
            soma ++;
        }
    }
    
    
    printf("%d valores positivos\n", soma);
    return 0;
}
