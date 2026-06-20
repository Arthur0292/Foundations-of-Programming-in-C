#include <stdio.h>
#include <string.h>

int main(){

    int tamanho, atual = 0;
    double cont = 0, palavra = 0;
    double porcetagem;
    char letra;
    char frase[1001];

    scanf("%c", &letra);
    scanf(" %[^\n]", frase);

    tamanho = strlen(frase);

    for(int i = 0; i<tamanho; i++){
        if(frase[i] == ' '){
            atual = i;
        }else if(frase[i] >= 'a' && frase[i] <= 'z' && frase[i + 1] == ' ' || frase[i + 1] == '\0'){
            palavra++;
            for(int j = i; j>atual; j--){
                if(frase[j] == letra){
                    cont++;
                    break;
                }
            }
        }
    }

    double resultado = (cont * 100)/palavra;

    printf("%.1lf\n", resultado);








    return 0;
}
