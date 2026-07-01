#include <stdio.h>

int main() {

   int a, b, maior = 0, atual = 0;

   scanf("%d %d", &a, &b);
   int matriz [100][100];

   for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            scanf("%d", &matriz[i][j]);
        }
   }

   for(int i = 0; i<a; i++){
    atual = 0;
    for(int j = 0; j<b; j++){
        atual+= matriz[i][j];
    }
    if(atual >= maior){
        maior = atual;
    }
   }

   for(int i = 0; i<b; i++){
    atual = 0;
    for(int j = 0; j<a; j++){
        atual+= matriz[j][i];
    }
    if(atual >= maior){
        maior = atual;
    }
   }

   printf("%d\n", maior);

    return 0;
}
