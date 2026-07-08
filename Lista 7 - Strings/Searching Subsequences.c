#include <stdio.h>
#include <string.h>

int main(){

    int caso = 0, sub = 0, subF = 0, dif = 0; 
    int subatual = 0;
    int tamanho2;
    char n[33];
    char n2[33];

    while(scanf("%s %s", n, n2) != EOF){
        
        cont = 0;
        caso++;

        int tamanho = strlen(n2);
        tamanho2 = strlen(n);

        for(int i = 0; i<tamanho; i++){
            
            if(n2[i] == n[cont]){
                
                subatual = i;
                
                for(int j = 0; j<tamanho2; j++){
                    if(n2[i+j] != n[j]){
                    dif++;
                    }

                }

                if(dif == 0){
                    sub++;
                    if(subF < subatual){
                    subF = subatual + 1;
                    }
                }

                dif = 0;
            }
        }

        if(sub == 0){
            printf("Caso #%d:\n", caso);
            printf("Nao existe subsequencia\n");
            printf("\n");
        }else{
            printf("Caso #%d:\n", caso);
            printf("Qtd.Subsequencias: %d\n", sub);
            printf("Pos: %d\n", subF);
            printf("\n");
        }
        subF = 0;
        sub = 0;
        subatual = 0;

    }

    return 0;
}
