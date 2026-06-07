#include <stdio.h>

int main(){
    
    int n[46];
    int x;
    scanf("%d", &x);

    n[0] = 0;
    n[1] = 1;
    for(int i = 2; i<46; i++){
        n[i] = n[i -1] + n[i - 2];
    }

    for(int i = 0; i<x; i++){
        if(i != x - 1){
            printf("%d ", n[i]);
        }else{
            printf("%d", n[i]);
        }
    }
    printf("\n");


    return 0;
}
