#include <stdio.h>
#include <string.h>

int chamadas = 0;

int rec(int n){
    int a;
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }

    chamadas += 2;
    a = rec(n - 1) + rec(n - 2);
}

int main() {

   int n, x;
   scanf("%d", &n);

   for(int i = 0; i<n; i++){
        scanf("%d", &x);

        int fib = rec(x);
        printf("fib(%d) = %d calls = %d", x, chamadas, fib);
   }

    return 0;
}
