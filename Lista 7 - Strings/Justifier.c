#include <stdio.h>
#include <string.h>

int main(){
    int n, maiorstring, stringatual, tamanho, espacos, casos = 1;
    char string[51];
    
    scanf("%d", &n);

    while(n != 0){
        char array[n][51];

        if(casos != 1){
            printf("\n");
        }
        
        for(int i = 0; i<n; i++){
            scanf("%s", string);
            strcpy(array[i], string);
            if(i == 0){
                maiorstring  = strlen(string);
            }else{
                stringatual = strlen(string);
                if(stringatual > maiorstring){
                    maiorstring = stringatual;
                }
            }
        }
        for(int i = 0; i<n; i++){
            tamanho = strlen(array[i]);
            if(tamanho < maiorstring){
                espacos = maiorstring - tamanho;
                for(int j = 0; j<espacos; j++){
                    printf(" ");
                }
                printf("%s\n", array[i]);
            }else{
                printf("%s\n", array[i]);
            }
        }
        scanf("%d", &n);
        maiorstring = 0;
        stringatual = 0;
        casos++;
    }

    return 0;
}
