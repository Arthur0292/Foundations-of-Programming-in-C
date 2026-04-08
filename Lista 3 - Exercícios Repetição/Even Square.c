#include <stdio.h>

int main(){

    int n, r;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            r = i * i;
            printf("%d^2 = %d\n",i, r);
        }
    }


    return 0;
}
