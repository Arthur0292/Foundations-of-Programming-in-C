#include <stdio.h>

int main() {

    int n;

    while(scanf(" %d", &n) == 1 && n != 0){

        int x, mary = 0, john = 0;

        for(int i = 0; i<n; i++){
            scanf("%d", &x);
            if(x == 0){
                mary++;
            }else{
                john++;
            }
        }

        printf("Mary won %d times and John won %d times\n", mary, john);


    }

    return 0;
}
