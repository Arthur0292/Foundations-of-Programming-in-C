#include <stdio.h>

int main(){

    int p1, c1, p2, c2, r1, r2;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);


    r1 = p1 * c1;
    r2 = p2 * c2;

    if(r1 == r2){
        printf("0\n");
    }else if(r2 > r1){
        printf("1\n");
    }else{
        printf("-1\n");
    }


    return 0;
}

