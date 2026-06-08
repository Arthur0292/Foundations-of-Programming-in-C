#include <stdio.h>

int main(){

    int n, x, cont = 0;
    scanf("%d", &n);


    int array[6];
    for(int i = 0; i<5; i++){
        scanf("%d", &x);
        array[i] = x;
    }

    for(int i = 0; i<5; i++){
        if(array[i] == n){
            cont++;
        }
    }

    printf("%d\n", cont);



    return 0;
}
