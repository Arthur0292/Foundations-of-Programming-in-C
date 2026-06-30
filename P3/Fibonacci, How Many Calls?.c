#include <stdio.h>
int chamadas;
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    chamadas += 2;
    return fib(n -1) + fib(n - 2);
}
int main() {

    int n, x;

    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &x);

        chamadas = 0;

        int r = fib(x);
        
        printf("fib(%d) = %d calls = %d", x, chamadas, r);
    }


    return 0;
}
