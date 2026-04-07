#include <stdio.h>

int main() {

    int n, i, soma = 0;
    
    scanf("%d %d", &i, &n);

    if(i > n){
        for(n = n + 1; n < i; n++){
        if(n%2 != 0){
            soma = soma + n;
        }
    }
    }else{
        for(i = i + 1; i < n; i++){
        if(i%2 != 0){
            soma = soma + i;
        }
    }
    }
    printf("%d\n", soma);

    return 0;
}
