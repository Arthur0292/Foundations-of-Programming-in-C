#include <stdio.h>

int main(){
   int x, r, n;
   int array[10];
   scanf("%d", &x);
   for(int i = 0; i<10; i++){
       if(i == 0){
       array[i] = x;
       }else{
       n = i - 1;
       array[i] = array[n] * 2;
       }
   }
   for(int i = 0; i<10; i++){
       r = array[i];
       printf("N[%d] = %d\n", i, r);
   }

   return 0;
}

