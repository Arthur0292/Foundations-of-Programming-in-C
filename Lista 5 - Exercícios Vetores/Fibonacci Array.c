#include <stdio.h>

int main() {
    int n, x;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        unsigned long long fib[x + 1];

        fib[0] = 0;
        if (x > 0) {
            fib[1] = 1;
        }
        for (int j = 2; j <= x; j++) {
            fib[j] = fib[j - 1] + fib[j - 2];
        }

        printf("Fib(%d) = %llu\n", x, fib[x]);
    }

    return 0; 
}
