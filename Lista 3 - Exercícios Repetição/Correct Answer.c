#include <stdio.h>
#include <string.h>

int main(){
   
    int n, x;
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        scanf("%d", &x);
        printf("resposta %d: %d\n", i, x);
    }

    return 0;
}
