#include <stdio.h>

int main() {

    int soma = 0, n, x, a, b;

    while(scanf("%d %d", &n, &x) != EOF){
        soma = 0;
        for(int i = 0; i<n; i++){
    
            scanf("%d %d", &a, &b);

            if(a == x && b == 0){
            soma ++;
            }
        
        }

        printf("%d\n", soma);
    }

    return 0;
}
