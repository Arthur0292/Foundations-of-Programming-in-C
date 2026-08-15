#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char texto[1000];
    char textoDi[1000];
    char alfaMa[28];

    for(int i = 0; i<27; i++){
        alfaMa[i] = 'A' + i;
    }

    alfaMa[28] = '\0';

    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        int cont = 0;
        scanf("%s", texto);

        int tamanho = strlen(texto);
        int maiuscula = 0;

        for(int i = tamanho - 1; i>=0; i--){
            for(int j = 0; j<27; j++){
                if(texto[i] == alfaMa[j]){
                    maiuscula++;
                    break;
                }
            }

            if(maiuscula == 0){
                textoDi[cont] = texto[i];
                cont++;
            }else{
                maiuscula = 0;
            }

        }

        textoDi[cont] = '\0';

        printf("%s\n", textoDi);

    }


    return 0;
}
