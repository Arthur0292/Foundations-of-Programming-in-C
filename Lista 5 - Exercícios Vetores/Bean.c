#include <stdio.h>

int main(){

    int n[4];
    int r;
    

    for(int i = 0; i<4; i++){
        scanf("%d", &n[i]);
    }

    for(int i = 0; i<4; i++){
        if(n[i] == 1){
            r = i + 1;
            break;
        }
    }

    printf("%d\n", r);


    return 0;
}
