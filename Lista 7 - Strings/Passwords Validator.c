#include <stdio.h>
#include <string.h>

int main()
{
    char senha[10000];
    int tamanho, temTam = 0, temMa = 0, temMi = 0, temNum = 0, erros = 0;
    
    while(scanf(" %[^\n]", senha) != EOF){

    temTam = 0, temMa = 0, temMi = 0, temNum = 0, erros = 0;

    tamanho = strlen(senha);

    if (tamanho >= 6 && tamanho <= 32){
        temTam++;
    }
    for (int i = 0; i < tamanho; i++){
        if (senha[i] >= 65 && senha[i] <= 90){
            temMa++;
            break;
        }
    }

    for (int i = 0; i < tamanho; i++){
    if (senha[i] >= 97 && senha[i] <= 122){
        temMi++;
        break;
    }
    }

    for (int i = 0; i < tamanho; i++){
    if (senha[i] >= 48 && senha[i] <= 57){
        temNum++;
        break;
    }
    }

    for (int i = 0; i < tamanho; i++){
    if (senha[i] >= 32 && senha[i] <= 47 || senha[i] >= 58 && senha[i] <= 64 || senha[i] >= 91 && senha[i] <= 96 || senha[i] >= 123 && senha[i] <= 127){
        erros++;
        break;
    }
    }
    if (temMa == 1 && temMi == 1 && temNum == 1 && temTam == 1 && erros == 0){
    printf("Senha valida.\n");
    }
    else{
    printf("Senha invalida.\n");
    }

}




return 0;
}
