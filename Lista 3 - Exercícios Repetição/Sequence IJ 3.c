#include <stdio.h>
#include <string.h>

int main(){
    
    int cont, x = 1, y = 7;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            printf("I=%d J=%d\n", x, y);
            y --;
        }
        x += 2;
        y += 5;
    }


    return 0;
}
