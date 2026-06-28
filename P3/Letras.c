#include <stdio.h>
#include <string.h>

int main() {

    char frase[10000];
    int aux = 0;
    double palavra = 0;
    double cont = 0;
    char letra;

    scanf("%c", &letra);
    scanf(" %[^\n]", frase);

    int tamanho = strlen(frase);
    for(int i = 0; i<tamanho; i ++){
        if(frase[i] == ' ' || i == tamanho - 1 && frase[i - 1] >= 'a' && frase[i - 1] <= 'z'){
            palavra++;
            for(int j = aux; j<i; j++){
                if(frase[j] == letra){
                    cont++;
                    break;
                }
            }
            aux = i + 1;
        }
    }

    double r = (cont * 100)/palavra;
    printf("%.1lf\n", r);

    return 0;
}
