#include <stdio.h>

int main() {

    int n, atual, cont = 0;
    scanf("%d", &n);

    int array[10000];

    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i<n; i++){
        if(i == 0){
            atual = array[i];
            cont++;
        }else if (array[i] != atual){
            atual = array[i];
            cont++;
        }
    }

    printf("%d\n", cont);
    

    return 0;
}
