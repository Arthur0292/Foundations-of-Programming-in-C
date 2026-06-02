#include <stdio.h>
#include <string.h>

int main(){
   
    int n, q, tamanho = 0, novotamanho, quantidade = 0, tamanhostr, diferente = 0, cont = 0, aux = 0;
    char palavras[10000][101];
    char consulta[101];
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%s", palavras[i]);
    }

    scanf("%d", &q);
    
    
    for(int i = 0; i<q; i++){
        scanf("%s", consulta);
        tamanhostr = strlen(consulta);
        
        while(cont < n) {
            
            for(int j = 0; j < tamanhostr; j++){
            if(consulta[j] != palavras[cont][j]){
                diferente++;
            }
            }
            
            if(diferente == 0 && aux == 0){
                quantidade++;
                tamanho = strlen(palavras[cont]);
                aux++;
            }else if(diferente == 0){
                quantidade++;
                novotamanho = strlen(palavras[cont]);
                if(novotamanho > tamanho){
                    tamanho = novotamanho;
                }
            }
            cont++;
            diferente = 0;
        }

        if(quantidade != 0){
            printf("%d %d\n", quantidade, tamanho);
        }else{
            quantidade =  -1;
            printf("%d\n", quantidade);
        }
        cont = 0;
        quantidade = 0;
        aux = 0;
    }

    return 0;
}
