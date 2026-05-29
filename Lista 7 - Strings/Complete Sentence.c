#include <stdio.h>
#include <string.h>

int main(){
    char alfabeto[27];
    char frase[1001];
    int n, tamanho, vezes = 0;

    scanf("%d", &n);

    for(int i = 0; i<26; i++){
        alfabeto[i] = 'a'+ i;
    }
    alfabeto[26] = '\0';

    for(int i = 0; i<n; i++){
        scanf(" %[^\n]", frase);
        tamanho = strlen(frase);
        for(int j = 0; j<tamanho; j++){
            for(int y = 0; y<26; y++){
                if(frase[j] == alfabeto[y]){
                    alfabeto[y] = 0;
                }
            }
        }
        for(int j = 0; j<26; j++){
            if(alfabeto[j] == 0){
                vezes++;
            }
        }
        
        if(vezes == 26){
            printf("frase completa\n");
        }else if(vezes >= 14){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }

        vezes = 0;

        for(int i = 0; i<26; i++){
        alfabeto[i] = 'a'+ i;
        }
        alfabeto[26] = '\0';
    }



    return 0;
}
