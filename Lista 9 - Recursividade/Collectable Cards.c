#include <stdio.h>
#include <string.h>

int mdc(int a, int b){
    if(b != 0){
        return mdc(b, a % b); 
    }else{
        return a;
    }
}

int main() {

    int n, a, b;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d %d", &a, &b);

        int x;
        if(a >= b){
            x = mdc(a, b);
        }else{
            x = mdc(b, a);
        }
        printf("%d\n", x);
    }


    return 0;
}
