#include <stdio.h>

long long int rec(long long int n, long long int cont){
    long long int a;
    if(n <= 0){
        return cont;
    }else{
        cont *= 2;
        a = rec(n - 1, cont);
    }
}
int main(){

    int n, x;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &x);

        long long int r = rec(x - 2, 1);

        long long int gramas = r/3;
        long long int kilos = gramas/1000;

        printf("%lld kg\n", kilos);
    }

    return 0;
}
