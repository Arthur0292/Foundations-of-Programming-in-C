#include <stdio.h>

int main(){

    int n, id, quant;
    double preco = 0;

    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &id);
        scanf("%d", &quant);

        if(id == 1001){
            preco += quant * 1.5;
        }else if(id == 1002){
            preco += quant * 2.5;
        }else if(id == 1003){
            preco += quant * 3.5;
        }else if(id == 1004){
            preco += quant * 4.5;
        }else if(id == 1005){
            preco += quant * 5.5;
        }

    }


    printf("%.2lf\n", preco);


    return 0;
}
