#include <stdio.h>

int main() {

    int n, latas, copos, soma = 0;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
    scanf("%d %d", &latas, &copos);

    if(latas > copos){
        soma = copos;
    }

    }
    printf("%d\n", soma);
    return 0; 
}
