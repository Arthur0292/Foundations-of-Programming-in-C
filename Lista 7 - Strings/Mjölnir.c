#include <stdio.h>
#include <string.h>

int main(){

    int n, forca;
    char nome[20];

    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%s %d", nome, &forca);
        if(strcmp(nome, "Thor") == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }

    return 0;
}
