#include <stdio.h>

int main() {

    int folhas, alunos, final;

    scanf("%d", &alunos);
    scanf("%d", &folhas);
    scanf("%d", &final);

    int t = alunos * final;

    if(folhas >= t){
    printf("S\n");
    }
    else{
    printf("N\n");
    }

return 0;

}


 







