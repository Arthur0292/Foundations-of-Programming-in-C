#include <stdio.h>
#include <string.h>

int main() {
    int n, t, x;

    while(scanf("%d %d", &n, &t) != EOF){
        
        t *= 2;
        x = n * t;

        printf("%d\n", x);
    }
    

    return 0;
}
