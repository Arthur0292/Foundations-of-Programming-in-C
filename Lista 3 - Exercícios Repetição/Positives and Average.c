#include <stdio.h>

int main() {

    double n, media, temp = 0;
    int soma = 0;

    for(int i = 1; i <= 6; i ++){
        scanf("%lf", &n);
        if(n > 0){
            temp += n;
            soma ++;
        }
    }
    
    media = temp / soma;

    printf("%d valores positivos\n", soma);
    printf("%.1lf\n", media);
    return 0;
}
