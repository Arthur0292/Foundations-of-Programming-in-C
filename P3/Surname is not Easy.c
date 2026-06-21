#include <stdio.h>
#include <string.h>

int main(){

    int n, ehvogal = 0, ehconsoante = 0, ehdificil;
    scanf("%d", &n);

    char sobrenome[101];
    char vogaisMa[6] = {'A', 'E', 'I', 'O', 'U'};
    char vogaisMi[6] = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i<n; i++){
        scanf("%s", sobrenome);

        int tamanho = strlen(sobrenome);

        for(int j = 0; j<tamanho; j++){
            
            for(int g = 0; g<5; g++){
                if(sobrenome[j] == vogaisMa[g]){
                    ehvogal++;
                    break;
                }
            }

            for(int g = 0; g<5; g++){
                if(sobrenome[j] == vogaisMi[g]){
                    ehvogal++;
                    break;
                }
            }

            if(ehvogal = 0){
                ehconsoante++;
                ehvogal = 0;
            }else{
                ehvogal = 0;
                ehconsoante = 0;
            }

            if(ehconsoante == 3){
                ehdificil = 1;
                ehvogal = 0;
            }


        }

        if(ehdificil >= 1){
            printf("%s nao eh facil\n", sobrenome);
        }else{
            printf("%s eh facil\n", sobrenome);
        }

        ehconsoante = 0;
        ehvogal = 0;

        

    }


    return 0;
}
