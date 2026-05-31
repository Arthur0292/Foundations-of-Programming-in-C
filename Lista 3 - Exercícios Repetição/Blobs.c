#include <stdio.h>
#include <string.h>

int main()
{
   int n, dias = 0;
   double comida, aux;
   scanf("%d", &n);

   for(int i = 0; i<n; i++){
      scanf("%lf", &comida);
      dias = 0;
      while(comida > 1){
         aux = comida/2;
         comida /= 2;
         dias++;
      }
      printf("%d dias\n", dias);
   }



return 0;
}
