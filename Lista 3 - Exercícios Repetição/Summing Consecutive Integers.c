#include <stdio.h>

int main() {
    
    int n, m, soma = 0;

    scanf("%d", &n);
    while(n < 0){
        scanf("%d", &n);
    }
    scanf("%d", &m);
    while(m <= 0){
        scanf("%d", &m);
    }

    for(int i = 0; i<m; i++){
        if(i != 0){
            soma += (n+ i);
        }else{
            soma = n;
        }
    }
    printf("%d\n", soma);
    return 0;
}
