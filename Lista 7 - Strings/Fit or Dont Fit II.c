#include <stdio.h>
#include <string.h>

int main(){

    int n, cont = 0, diferente = 0;
    char A[1001];
    char B[1001];
    
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%s %s", A, B);
        
        int tamanhoA = strlen(A);
        int tamanhoB = strlen(B);

        if(tamanhoB > tamanhoA){
            printf("nao encaixa\n");
        }else{
            int j = tamanhoA - tamanhoB;

            for(int k = j; k<tamanhoA; k++){
                if(A[k] != B[cont]){
                    diferente++;
                    break;
                }
                cont++;
            }

            if(diferente == 0){
                printf("encaixa\n");
            }else{
                printf("nao encaixa\n");
            }
        }

        diferente = 0;
        cont = 0;

    }

    return 0;
}
