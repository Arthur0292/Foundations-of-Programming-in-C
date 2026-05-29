#include <stdio.h>
#include <string.h>

int main(){

int n, x, y = 0;
char linguaFalada[30];
char lingua[30];
scanf("%d", &n);

for(int i = 0; i<n; i++){
    scanf("%d", &x);
    y = 0;
    for(int j = 0; j<x; j++){
        scanf("%s", lingua);
        if(j == 0){
        strcpy(linguaFalada, lingua);
        }else{
            if(y == 0){
            if(strcmp(linguaFalada, lingua) == 0){
                strcpy(linguaFalada, lingua);
            }else{
                strcpy(linguaFalada, "ingles");
                y = 1;
            }
        }
        }
    
    }
    printf("%s\n", linguaFalada);
}


    return 0;
}
