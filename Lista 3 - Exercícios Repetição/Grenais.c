#include <stdio.h>

int main(){

    int I, G, denovo = 1, vG = 0, vI = 0, emp = 0, nGre = 0;

    while(denovo != 2){
        scanf("%d %d", &I, &G);
        if(I > G){
            vI++;
        }else if(G > I){
            vG++;
        }else{
            emp++;
        }
        nGre++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &denovo);
    }
    printf("%d grenais\n", nGre);
    printf("Inter:%d\n", vI);
    printf("Gremio:%d\n", vG);
    printf("Empates:%d\n", emp);
    if(vI > vG){
        printf("Inter venceu mais\n");
    }else if(vG > vI){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }
    
    

    return 0;
}
