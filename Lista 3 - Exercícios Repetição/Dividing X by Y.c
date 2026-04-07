#include <stdio.h>

int main(){

    int n;
    double x, y, r;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%lf", &x);
        scanf("%lf", &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }else{
        r = x / y;
        printf("%.1lf\n", r);
        }
    }



    return 0;
}
