#include <stdio.h>

int main(){
   double n[100];
   double r, z, x;
   scanf("%lf", &x);
   for(int i = 0; i<100; i++){
       if(i == 0){
           n[i] = x;
       }else{
           r = n[i - 1];
           r = r/2.0;
           n[i] = r;
       }
   }
  
   for(int i = 0; i<100; i++){
       z = n[i];
       printf("N[%d] = %.4lf\n", i, z);
   }

   return 0;
}

