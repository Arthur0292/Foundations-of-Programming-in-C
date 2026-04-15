#include <stdio.h>

int main(){
    int x, n, in = 0, out = 0;

    scanf("%d", &x);
    for(int i = 0; i<x; i++){
        scanf("%d", &n);
        if((n >= 10) && (n <= 20)){
            in++;
        }else{
            out++;
        }
    }
        
    

        printf("%d in\n", in);
        printf("%d out\n", out);



    return 0;
}
