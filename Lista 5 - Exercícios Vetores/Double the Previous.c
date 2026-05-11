#include <stdio.h>

int main() {
    int x, n, y;
    scanf("%d", &x);
    
    int array[x];
    scanf("%d", &n);

    printf("array[%d] = {", x);
    
    for(int i = 0; i<x; i++){
        if(i == 0){
            array[i] = n;
        }
        else{
            y = array[i -1];
            y *= 2;
            array[i] = y;
        }
        
        if(i == (x -1)){
            printf("%d}\n", array[i]);
        }
        else{
        printf("%d, ", array[i]);
        }
    }
    

    return 0;
}
