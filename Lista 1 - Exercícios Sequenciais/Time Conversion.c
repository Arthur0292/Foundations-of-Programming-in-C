#include <stdio.h>


int main(){
    
    int n, s, m, h, temp;

    scanf("%d", &n);

    h = n/3600;
    temp = n%3600;
    m = temp/60;
    s = temp%60;

    printf("%d:%d:%d\n", h, m, s);


    return 0;
}
