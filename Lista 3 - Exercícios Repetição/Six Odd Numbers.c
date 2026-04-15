#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int x = n + 11;

        for(n; n<=x; n++){
            if(n%2){
                printf("%d\n", n);
            }
        }

    return 0;
}
