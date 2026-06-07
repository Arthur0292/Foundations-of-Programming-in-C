#include <stdio.h>
#include <string.h>

int main(){
    
    int n, mul = 1;
    scanf("%d", &n);

    for(int i = 2; i<=n; i++){
        mul *= i;
    }
    
    printf("%d\n", mul);


    return 0;
}
