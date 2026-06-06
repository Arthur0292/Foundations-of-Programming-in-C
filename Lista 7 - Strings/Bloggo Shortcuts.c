#include <stdio.h>
#include <string.h>

int main(){
    int tamanho, linha = 0, asterisco = 0, cont = 0;
    char string[10000], novastring[10000];

    while(fgets(string, sizeof(string), stdin) != NULL){
        tamanho = strlen(string);
        if (tamanho > 0 && string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        tamanho--;
        }
        
        for(int i = 0; i<tamanho; i++){
            if(string[i] == '_' || string[i] == '*'){
                if(string[i] == '_'){
                if(linha == 0){
                    novastring[cont] = '<';
                    cont++;
                    novastring[cont] = 'i';
                    cont++;
                    novastring[cont] = '>';
                    cont++;
                    linha++;
                }else{
                    novastring[cont] = '<';
                    cont++;
                    novastring[cont] = '/';
                    cont++;
                    novastring[cont] = 'i';
                    cont++;
                    novastring[cont] = '>';
                    cont++;

                    linha = 0;
                }
            }
            if(string[i] == '*'){
                if(asterisco == 0){
                    novastring[cont] = '<';
                    cont++;
                    novastring[cont] = 'b';
                    cont++;
                    novastring[cont] = '>';
                    cont++;
                    asterisco++;
                }else{
                    novastring[cont] = '<';
                    cont++;
                    novastring[cont] = '/';
                    cont++;
                    novastring[cont] = 'b';
                    cont++;
                    novastring[cont] = '>';
                    cont++;
                    asterisco = 0;
                }
            }
            }else{
                novastring[cont] = string[i];
                cont++;
            }
           

        }
        
        novastring[cont] = '\0';

        printf("%s\n", novastring);
        cont = 0;
    }
        
        

    


    return 0;
}
