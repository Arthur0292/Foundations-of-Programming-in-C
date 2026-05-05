#include <stdio.h>

int main(){
   int x, r;
   int array[10];
   for(int i = 0; i<10; i++){
       scanf("%d", &x);
       if(x <= 0){
           x = 1;
       }
       array[i] = x;
   }

   for(int i = 0; i<10; i++){
       r = array[i];
       printf("X[%d] = %d\n", i, r);
   }

   return 0;
}
vs
