#include <stdio.h>

int main() {
    
    int i = -2;
    
    for(int  j = 60; j>=0 ;j = j-5){
        i = i + 3;
        printf("I=%d", i);
        printf(" ");
        printf("J=%d\n", j);
    }

    return 0;
}
