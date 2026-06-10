#include <stdio.h>

int main(){

    int m, c, r;

    scanf("%d %d", &m, &c);

    if(m < c){
        r = c - m;
        printf("%d\n", r);
    }else{
        r = m%c;
        printf("%d\n", r);
    }


    return 0;
}
