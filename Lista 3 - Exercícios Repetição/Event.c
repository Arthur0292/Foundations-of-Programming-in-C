#include <stdio.h>

int main(){

    int a, b, r;

    while(scanf("%d %d", &a, &b), a != 0 && b != 0){

        r = a*b;
        printf("%d\n", r);


    }

    return 0;
}
