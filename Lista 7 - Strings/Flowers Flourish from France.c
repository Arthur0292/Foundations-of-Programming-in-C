#include <stdio.h>
#include <string.h>

int main(){

    char frase[10000];
    char letra[2];
    char alfaMi[27];
    char alfaMa[27];
    int pos = 0, diferente = 0;

    for(int i = 0; i<26; i++){
        alfaMi[i] = 'a' + i;
        alfaMa[i] = 'A' + i;
    }

    alfaMi[26] = '\0';
    alfaMa[26] = '\0';

    while(scanf(" %[^\n]", frase) == 1 && frase[0] != '*'){
        
        letra[0] = frase[0];
        letra[1] = '\0';

        for(int i = 0; i<26; i++){
            if(letra[0] == alfaMi[i]){
                pos = i;
            }else if(letra[0] == alfaMa[i]){
                pos = i;
            }
        }

        int tamanho = strlen(frase);

        for(int i = 1; i<tamanho; i++){
            if(frase[i - 1] == ' '){
                if(frase[i] != alfaMa[pos] && frase[i] != alfaMi[pos]){
                    diferente++;
                    break;
                }

            }
        }

        if(diferente == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }


        diferente = 0;

    }

    return 0;
}
