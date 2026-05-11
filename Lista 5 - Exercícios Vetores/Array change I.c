#include <stdio.h>

int main() {
    int array[20];
    int n;

    for(int i = 19; i>=0; i--){
        scanf("%d", &n);
        array[i] = n;
    }
    for(int j = 0; j<20; j++){
        printf("N[%d] = %d\n", j, array[j]);
    }


    return 0;
}
