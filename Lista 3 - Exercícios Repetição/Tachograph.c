#include <stdio.h>

int main(){

    int n, v, t;
    scanf("%d", &n);
    int soma = 0;

    for(int i = 0; i<n; i++){
        scanf("%d %d", &t, &v);
        soma += (t * v);
    }

    printf("%d\n", soma);




    return 0;
}
