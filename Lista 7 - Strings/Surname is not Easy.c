#include <stdio.h>
#include <string.h>

int main() {
    char sobrenome[100];
    int n, tamanho, ehvogal = 0, ehcosoante = 0, ehdificil = 0;
    char vogaisMi[6] = {'a', 'e', 'i', 'o', 'u'};
    char vogaisMa[6] = {'A', 'E', 'I', 'O', 'U'};

    scanf("%d", &n);

        for(int i = 0; i < n; i++) {
            scanf("%s", sobrenome);
            tamanho = strlen(sobrenome);
            ehdificil = 0;
            ehcosoante = 0;
            
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
                
                if(ehvogal == 0){
                    ehcosoante++;
                    ehvogal = 0;
                }else{
                    ehcosoante = 0; 
                    ehvogal = 0;
                }
                
                if(ehcosoante == 3){
                    ehdificil = 1;
                    ehvogal = 0;
                    break;
                }
            }
            
            if(ehdificil >= 1){
                printf("%s nao eh facil\n", sobrenome);
            }else if(ehdificil == 0){
                printf("%s eh facil\n", sobrenome);
            }


        
        }
    

    return 0;
}
