#include <stdio.h>
#include <string.h>

int main(){
    int n, tamanho, tamanho1, tamanho2, cont = 0;
    char string1[101];
    char string2[101];
    char novastring[10000];
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%s", string1);
        scanf("%s", string2);
        tamanho1 = strlen(string1);
        tamanho2 = strlen(string2);
        
        if(tamanho1 >= tamanho2){
            tamanho = tamanho1;
            for(int j = 0; j<tamanho; j++){
                if(j < tamanho2){
                    novastring[cont] = string1[j];
                    cont++;
                    novastring[cont] = string2[j];
                    cont++;
                }else{
                    novastring[cont] = string1[j];
                    cont++;
                }
            }
            novastring[cont] = '\0';
        }else{
            tamanho = tamanho2;
            for(int j = 0; j<tamanho; j++){
                if(j < tamanho1){
                    novastring[cont] = string1[j];
                    cont++;
                    novastring[cont] = string2[j];
                    cont++;
                }else{
                    novastring[cont] = string2[j];
                    cont++;
                }
            }
            novastring[cont] = '\0';
        }
        printf("%s\n", novastring);
        cont = 0;

    }


    return 0;
}
