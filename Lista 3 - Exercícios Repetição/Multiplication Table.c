#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        int r = i * n;
        printf("%d x %d = %d\n", i, n, r);
    }


    return 0;
}
