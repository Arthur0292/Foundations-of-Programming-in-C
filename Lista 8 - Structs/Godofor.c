#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[101];
    int a;
    int b;
    int c;

}deus;

int main(){
    int n, maior, x;

    scanf("%d", &n);

    deus pessoa[n];
    int soma[n];


    for(int i = 0; i<n; i++){
        scanf("%s", pessoa[i].nome);
        scanf("%d", &pessoa[i].a);
        scanf("%d", &pessoa[i].b);
        scanf("%d", &pessoa[i].c);
    }

    for(int i = 0; i<n; i++){
        if(i == 0){
            soma[i] = pessoa[i].a;
            maior = soma[i];
            x = i;
        }else{
            soma[i] = pessoa[i].a;
            if(soma[i] > maior){
                maior = soma[i];
                x = i;
            }else if (soma[i] == maior){
                if(pessoa[i].b > pessoa[x].b){
                    maior = soma[i];
                    x = i;
                }
                else if(pessoa[i].b == pessoa[x].b){
                    if(pessoa[i].c < pessoa[x].c){
                        maior = soma[i];
                        x = i;
                    }else if(pessoa[i].c == pessoa[x].c){
                        if (strcmp(pessoa[i].nome, pessoa[x].nome) < 0) {
                        x = i;
                        }
                    }
                }
            }
        }
    }   
    

    printf("%s\n", pessoa[x].nome);



    return 0;
}
